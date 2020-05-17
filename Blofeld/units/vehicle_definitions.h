#pragma once

namespace blofeld
{

	constexpr unsigned long VEHICLE_TAG = 'vehi';

	extern s_tag_group vehicle_group;

	extern s_tag_block_definition human_tank_block_block;
	extern s_tag_struct_definition human_jeep_block_block_struct;
	extern s_tag_block_definition human_jeep_block_block;
	extern s_tag_struct_definition human_plane_block_block_struct;
	extern s_tag_block_definition human_plane_block_block;
	extern s_tag_struct_definition wolverine_block_block_struct;
	extern s_tag_block_definition wolverine_block_block;
	extern s_tag_struct_definition alien_scout_block_block_struct;
	extern s_tag_block_definition alien_scout_block_block;
	extern s_tag_struct_definition alien_fighter_block_block_struct;
	extern s_tag_block_definition alien_fighter_block_block;
	extern s_tag_struct_definition turret_block_block_struct;
	extern s_tag_block_definition turret_block_block;
	extern s_tag_struct_definition mantis_block_block_struct;
	extern s_tag_block_definition mantis_block_block;
	extern s_tag_struct_definition vtol_speed_interpolated_block_block_struct;
	extern s_tag_block_definition vtol_speed_interpolated_block_block;
	extern s_tag_struct_definition vtol_block_block_struct;
	extern s_tag_block_definition vtol_block_block;
	extern s_tag_struct_definition chopper_block_block_struct;
	extern s_tag_block_definition chopper_block_block;
	extern s_tag_struct_definition guardian_block_block_struct;
	extern s_tag_block_definition guardian_block_block;
	extern s_tag_struct_definition jackal_glider_block_block_struct;
	extern s_tag_block_definition jackal_glider_block_block;
	extern s_tag_struct_definition boat_block_block_struct;
	extern s_tag_block_definition boat_block_block;
	extern s_tag_struct_definition space_fighter_block_block_struct;
	extern s_tag_block_definition space_fighter_block_block;
	extern s_tag_struct_definition revenant_block_block_struct;
	extern s_tag_block_definition revenant_block_block;
	extern s_tag_struct_definition SoundRTPCBlock_block_struct;
	extern s_tag_block_definition SoundRTPCBlock_block;
	extern s_tag_struct_definition SoundSweetenerBlock_block_struct;
	extern s_tag_block_definition SoundSweetenerBlock_block;
	extern s_tag_struct_definition physics_transitions_block_block_struct;
	extern s_tag_block_definition physics_transitions_block_block;
	extern s_tag_block_definition vehicle_block_block;


	extern s_tag_struct_definition vehicle_group_struct_definition; // tag group
	extern s_tag_struct_definition vehicle_physics_types_struct_struct_definition;
	extern s_tag_struct_definition human_tank_struct_struct_definition;
	extern s_tag_struct_definition vehicle_steering_control_struct_struct_definition;
	extern s_tag_struct_definition vehicle_turning_control_struct_struct_definition;
	extern s_tag_struct_definition steering_animation_struct_struct_definition;
	extern s_tag_struct_definition engine_function_struct_struct_definition;
	extern s_tag_struct_definition vtol_descent_function_struct_struct_definition;
	extern s_tag_struct_definition flight_surface_struct_struct_definition;
	extern s_tag_struct_definition jackal_glider_drag_struct_struct_definition;

	extern const char* vehicle_flags_strings[];
	extern s_string_list_definition vehicle_flags;
	extern const char* vehicle_size_enum_strings[];
	extern s_string_list_definition vehicle_size_enum;
	extern const char* alien_scout_specific_type_enum_strings[];
	extern s_string_list_definition alien_scout_specific_type_enum;
	extern const char* vehicle_type_enum_strings[];
	extern s_string_list_definition vehicle_type_enum;
	extern const char* alien_scout_flags_strings[];
	extern s_string_list_definition alien_scout_flags;
	extern const char* tank_flags_strings[];
	extern s_string_list_definition tank_flags;
	extern const char* dimensions_enum_strings[];
	extern s_string_list_definition dimensions_enum;
	extern const char* turret_flags_strings[];
	extern s_string_list_definition turret_flags;
	extern const char* boat_flags_strings[];
	extern s_string_list_definition boat_flags;
	extern const char* space_fighter_turn_back_flags_strings[];
	extern s_string_list_definition space_fighter_turn_back_flags;
	extern const char* space_fighter_roll_flags_strings[];
	extern s_string_list_definition space_fighter_roll_flags;

} // namespace blofeld

