#include <blofeld-private-pch.h>

namespace blofeld
{

	TAG_GROUP_FROM_BLOCK(spring_acceleration, SPRING_ACCELERATION_TAG, spring_acceleration_block_block );

	TAG_BLOCK(spring_linear_acceleration_block, k_dimensions_in_3d_count)
	{
		FIELD( _field_real, "acceleration range:world units" ),
		FIELD( _field_real, "inverse acceleration range:world units*!" ),
		FIELD( _field_real, "world acceleration scale#0 defaults to 1, scale the acceleration the object itself applies on this system." ),
		FIELD( _field_explanation, "damping" ),
		FIELD( _field_struct, "spring damping", &scalar_function_named_struct_struct_definition ),
		FIELD( _field_real, "velocity domain" ),
		FIELD( _field_struct, "spring acceleration", &scalar_function_named_struct_struct_definition ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK_FROM_STRUCT(spring_acceleration_block, 1, spring_acceleration_struct_definition_struct_definition );

	TAG_STRUCT(spring_acceleration_struct_definition)
	{
		FIELD( _field_block, "linear acceleartions", &spring_linear_acceleration_block_block ),
		FIELD( _field_short_block_index, "x-axis" ),
		FIELD( _field_short_block_index, "y-axis" ),
		FIELD( _field_short_block_index, "z-axis" ),
		FIELD( _field_pad, "pad", 2 ),
		FIELD( _field_terminator )
	};

} // namespace blofeld

