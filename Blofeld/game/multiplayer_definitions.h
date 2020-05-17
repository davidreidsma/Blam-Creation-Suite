#pragma once

namespace blofeld
{

	constexpr unsigned long MULTIPLAYER_GLOBALS_TAG = 'mulg';

	extern s_tag_group multiplayer_globals_group;

	extern s_tag_struct_definition spawn_influence_weight_falloff_function_block_block_struct;
	extern s_tag_block_definition spawn_influence_weight_falloff_function_block_block;
	extern s_tag_struct_definition teamDefinitionBlock_block_struct;
	extern s_tag_block_definition teamDefinitionBlock_block;
	extern s_tag_struct_definition requisition_palette_block_block_struct;
	extern s_tag_block_definition requisition_palette_block_block;
	extern s_tag_struct_definition requisition_constants_block_block_struct;
	extern s_tag_block_definition requisition_constants_block_block;
	extern s_tag_struct_definition multiplayer_universal_block_block_struct;
	extern s_tag_block_definition multiplayer_universal_block_block;
	extern s_tag_struct_definition sounds_block_block_struct;
	extern s_tag_block_definition sounds_block_block;
	extern s_tag_struct_definition looping_sounds_block_block_struct;
	extern s_tag_block_definition looping_sounds_block_block;
	extern s_tag_struct_definition multiplayer_constants_block_block_struct;
	extern s_tag_block_definition multiplayer_constants_block_block;
	extern s_tag_struct_definition game_engine_status_response_block_block_struct;
	extern s_tag_block_definition game_engine_status_response_block_block;
	extern s_tag_struct_definition multiplayer_runtime_block_block_struct;
	extern s_tag_block_definition multiplayer_runtime_block_block;
	extern s_tag_block_definition multiplayer_globals_block_block;
	extern s_tag_struct_definition multiplayer_color_block$3_block_struct;
	extern s_tag_block_definition multiplayer_color_block$3_block;


	extern s_tag_struct_definition multiplayer_globals_struct_definition_struct_definition; // tag group

	extern const char* requisition_special_buy_enum_strings[];
	extern s_string_list_definition requisition_special_buy_enum;
	extern const char* emblemInfoFlags_strings[];
	extern s_string_list_definition emblemInfoFlags;
	extern const char* playerColorEnum_strings[];
	extern s_string_list_definition playerColorEnum;
	extern const char* game_engine_status_enum_definition_strings[];
	extern s_string_list_definition game_engine_status_enum_definition;
	extern const char* game_engine_status_flags_definition_strings[];
	extern s_string_list_definition game_engine_status_flags_definition;

} // namespace blofeld

