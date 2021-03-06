#pragma once

constexpr size_t k_game_variant_buffer_size = 0x1CC00;
constexpr size_t k_map_variant_buffer_size = 0xE800;

struct s_peer_context
{
	long long secure_address;
};

struct s_player_context_v1
{
	long long xbox_user_id;
	long team;
	long player_assigned_team;
	long long secure_address;
};

struct s_player_context_v2 :
	public s_player_context_v1
{
	long __unknown18;
	long __unknown1C;
};

template<typename s_player_context>
class c_game_context
{
public:
	long game_mode;

	char game_variant_buffer[k_game_variant_buffer_size];
	char map_variant_buffer[k_map_variant_buffer_size];

	long map_id;

	long campaign_difficulty_level;
	unsigned short campaign_insertion_point;
	short infinity_mission_id;
private:
	char __padding0[8];
public:
	unsigned long long launcher_skull_mask;
private:
	char __padding1[8];
public:
	char* game_state_header;
	uint64_t game_state_header_size;

	const char* saved_film_path;

	s_peer_context party;
	s_peer_context local;

	bool is_host;
	bool visual_remaster;
	bool music_remaster;
private:
	char __padding2[5];
public:
	s_peer_context peers[17];
	uint64_t peer_count;

	s_player_context players[16];
	uint64_t player_count;

	s_peer_context host;

private:
	char __padding3[8];
public:
	const wchar_t* custom_engine_name;
private:
	char __padding4[176];
};
using c_game_context_v1 = c_game_context<s_player_context_v1>;
using c_game_context_v2 = c_game_context<s_player_context_v2>;
constexpr size_t k_game_context_v1_size = sizeof(c_game_context_v1);
constexpr size_t k_game_context_v2_size = sizeof(c_game_context_v2);
static_assert_64(k_game_context_v1_size == 0x2B738, "c_game_context_v1 invalid size");
static_assert_64(k_game_context_v2_size == 0x2B7B8, "c_game_context_v2 invalid size");

struct c_game_context_v3
{
public:
	bool visual_remaster;
	bool music_remaster;
private:
	char __padding0;
public:
	bool is_host;
private:
	char __padding1[8];
public:
	long game_mode;
	long map_id;

	long campaign_difficulty_level;
private:
	char __padding2[4];
public:
	unsigned short campaign_insertion_point;
	short infinity_mission_id;
	unsigned long long launcher_skull_mask;

	s_peer_context party;
	s_peer_context local;

	s_peer_context peers[17];
	uint64_t peer_count;

	s_player_context_v2 players[16];
	uint64_t player_count;
	s_peer_context host;

	char game_variant_buffer[k_game_variant_buffer_size];
	char map_variant_buffer[k_map_variant_buffer_size];

	uint64_t game_state_header_size;
	char* game_state_header;
	const char* saved_film_path;
	const wchar_t* custom_engine_name;
};
constexpr size_t k_game_context_v3_size = sizeof(c_game_context_v3);
static_assert_64(k_game_context_v3_size == 0x2B6F8, "c_game_context_v3 invalid size");

class GameContext
{
private:
	union
	{
		c_game_context_v1 game_context_v1;
		c_game_context_v2 game_context_v2;
		c_game_context_v3 game_context_v3;
	};
public:
	e_game_context_version const game_context_version;

	bool& visual_remaster;
	bool& music_remaster;
	bool& is_host;
	long& game_mode;
	long& map_id;
	long& campaign_difficulty_level;
	unsigned short& campaign_insertion_point;
	short &infinity_mission_id;
	unsigned long long& launcher_skull_mask;
	s_peer_context& party;
	s_peer_context& local;
	s_peer_context(&peers)[17];
	uint64_t& peer_count;
	//s_player_context_v1 players[16];
	//s_player_context_v2 players[16];
	uint64_t& player_count;
	s_peer_context& host;
	char(&game_variant_buffer)[k_game_variant_buffer_size];
	char(&map_variant_buffer)[k_map_variant_buffer_size];
	uint64_t& game_state_header_size;
	char*& game_state_header;
	const char*& saved_film_path;
	const wchar_t*& custom_engine_name;

private:

#define reference_getter(field_name) \
	decltype(&field_name) get_##field_name() \
	{ \
		switch (game_context_version) \
		{ \
		case _game_context_version_1: return &game_context_v1.field_name; \
		case _game_context_version_2: return &game_context_v2.field_name; \
		case _game_context_version_3: return &game_context_v3.field_name; \
		} \
		return nullptr; \
	}

	reference_getter(visual_remaster);
	reference_getter(music_remaster);
	reference_getter(is_host);
	reference_getter(game_mode);
	reference_getter(map_id);
	reference_getter(campaign_difficulty_level);
	reference_getter(campaign_insertion_point);
	reference_getter(infinity_mission_id);
	reference_getter(launcher_skull_mask);
	reference_getter(party);
	reference_getter(local);
	reference_getter(peers);
	reference_getter(peer_count);
	//reference_getter(players);
	reference_getter(player_count);
	reference_getter(host);
	reference_getter(game_variant_buffer);
	reference_getter(map_variant_buffer);
	reference_getter(game_state_header_size);
	reference_getter(game_state_header);
	reference_getter(saved_film_path);
	reference_getter(custom_engine_name);

#undef reference_getter

	class c_virtual_game_context_players_interface
	{
	public:
		c_virtual_game_context_players_interface(GameContext& parent) :
			parent(parent)
		{ }

		GameContext& parent;

		s_player_context_v1& operator[](size_t player_index) const
		{
			switch (parent.game_context_version)
			{
			case _game_context_version_1: return parent.game_context_v1.players[player_index];
			case _game_context_version_2: return parent.game_context_v2.players[player_index];
			case _game_context_version_3: return parent.game_context_v3.players[player_index];
			}
			throw;
		}
	};
public:
	c_virtual_game_context_players_interface players;

	GameContext(e_game_context_version game_context_version) :
		game_context_v1(),
		//game_context_v2(),
		//game_context_v3(),
		game_context_version(game_context_version),
		visual_remaster(*get_visual_remaster()),
		music_remaster(*get_music_remaster()),
		is_host(*get_is_host()),
		game_mode(*get_game_mode()),
		map_id(*get_map_id()),
		campaign_difficulty_level(*get_campaign_difficulty_level()),
		campaign_insertion_point(*get_campaign_insertion_point()),
		infinity_mission_id(*get_infinity_mission_id()),
		launcher_skull_mask(*get_launcher_skull_mask()),
		party(*get_party()),
		local(*get_local()),
		peers(*get_peers()),
		peer_count(*get_peer_count()),
		players(*this),
		player_count(*get_player_count()),
		host(*get_host()),
		game_variant_buffer(*get_game_variant_buffer()),
		map_variant_buffer(*get_map_variant_buffer()),
		game_state_header_size(*get_game_state_header_size()),
		game_state_header(*get_game_state_header()),
		saved_film_path(*get_saved_film_path()),
		custom_engine_name(*get_custom_engine_name())
	{
		memset(&game_context_v1, 0, sizeof(game_context_v1));
		memset(&game_context_v2, 0, sizeof(game_context_v2));
		memset(&game_context_v3, 0, sizeof(game_context_v3));
	}
};
