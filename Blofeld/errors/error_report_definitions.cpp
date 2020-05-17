#include <blofeld-private-pch.h>

namespace blofeld
{

	TAG_BLOCK(error_report_vertices_block, MAXIMUM_VERTICES_PER_ERROR_REPORT)
	{
		FIELD( _field_struct, "point", &error_report_point_definition_struct_definition ),
		FIELD( _field_real_argb_color, "color*" ),
		FIELD( _field_real, "screen size*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(error_report_vectors_block, MAXIMUM_VECTORS_PER_ERROR_REPORT)
	{
		FIELD( _field_struct, "point", &error_report_point_definition_struct_definition ),
		FIELD( _field_real_argb_color, "color*" ),
		FIELD( _field_real_vector_3d, "normal*" ),
		FIELD( _field_real, "screen length*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(error_report_lines_block, MAXIMUM_LINES_PER_ERROR_REPORT)
	{
		FIELD( _field_array, "points*", &error_report_line_point_array_array ),
		FIELD( _field_real_argb_color, "color*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(error_report_triangles_block, MAXIMUM_TRIANGLES_PER_ERROR_REPORT)
	{
		FIELD( _field_array, "points*", &error_report_triangle_point_array_array ),
		FIELD( _field_real_argb_color, "color*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(error_report_quads_block, MAXIMUM_QUADS_PER_ERROR_REPORT)
	{
		FIELD( _field_array, "points*", &error_report_quad_point_array_array ),
		FIELD( _field_real_argb_color, "color*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(error_report_comments_block, MAXIMUM_COMMENTS_PER_ERROR_REPORT)
	{
		FIELD( _field_data, "text*" ),
		FIELD( _field_struct, "point", &error_report_point_definition_struct_definition ),
		FIELD( _field_real_argb_color, "color*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(error_reports_block, MAXIMUM_REPORTS_PER_ERROR_REPORT_CATEGORY)
	{
		FIELD( _field_char_enum, "type*", &error_report_types ),
		FIELD( _field_char_enum, "source*", &error_report_source ),
		FIELD( _field_word_flags, "flags*", &error_report_flags ),
		FIELD( _field_data, "text*" ),
		FIELD( _field_long_integer, "source identifier*" ),
		FIELD( _field_string, "source filename*" ),
		FIELD( _field_long_integer, "source line number*" ),
		FIELD( _field_block, "vertices*", &error_report_vertices_block_block ),
		FIELD( _field_block, "vectors*", &error_report_vectors_block_block ),
		FIELD( _field_block, "lines*", &error_report_lines_block_block ),
		FIELD( _field_block, "triangles*", &error_report_triangles_block_block ),
		FIELD( _field_block, "quads*", &error_report_quads_block_block ),
		FIELD( _field_block, "comments*", &error_report_comments_block_block ),
		FIELD( _field_long_integer, "report key*" ),
		FIELD( _field_long_integer, "node index*" ),
		FIELD( _field_real_bounds, "bounds x*" ),
		FIELD( _field_real_bounds, "bounds y*" ),
		FIELD( _field_real_bounds, "bounds z*" ),
		FIELD( _field_real_argb_color, "color*" ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK(global_error_report_categories_block, MAXIMUM_ERROR_REPORT_CATEGORIES)
	{
		FIELD( _field_long_string, "name^*" ),
		FIELD( _field_enum, "report type*", &error_report_types ),
		FIELD( _field_word_flags, "flags*", &error_report_flags ),
		FIELD( _field_short_integer, "runtime generation flags!" ),
		FIELD( _field_pad, "WVTP", 2 ),
		FIELD( _field_long_integer, "runtime something~!" ),
		FIELD( _field_block, "reports*", &error_reports_block_block ),
		FIELD( _field_terminator )
	};

	TAG_ARRAY(error_point_node_index_array, MAXIMUM_NODE_INDICES_PER_ERROR_POINT)
	{
		FIELD( _field_char_integer, "node index*" ),
		FIELD( _field_terminator )
	};

	TAG_ARRAY(error_point_node_weight_array, MAXIMUM_NODE_INDICES_PER_ERROR_POINT)
	{
		FIELD( _field_real, "node weight*" ),
		FIELD( _field_terminator )
	};

	TAG_ARRAY(error_report_line_point_array, k_vertices_per_line_count)
	{
		FIELD( _field_struct, "point", &error_report_point_definition_struct_definition ),
		FIELD( _field_terminator )
	};

	TAG_ARRAY(error_report_triangle_point_array, k_vertices_per_triangle_count)
	{
		FIELD( _field_struct, "point", &error_report_point_definition_struct_definition ),
		FIELD( _field_terminator )
	};

	TAG_ARRAY(error_report_quad_point_array, k_vertices_per_quadrilateral_count)
	{
		FIELD( _field_struct, "point", &error_report_point_definition_struct_definition ),
		FIELD( _field_terminator )
	};

	TAG_STRUCT(error_report_point_definition)
	{
		FIELD( _field_real_point_3d, "position*" ),
		FIELD( _field_array, "node indices*", &error_point_node_index_array_array ),
		FIELD( _field_array, "node weights*", &error_point_node_weight_array_array ),
		FIELD( _field_terminator )
	};

	TAG_ENUM(error_report_types, 4)
	{
		OPTION("silent"),
		OPTION("comment"),
		OPTION("warning"),
		OPTION("error"),
	};

	TAG_ENUM(error_report_source, 5)
	{
		OPTION("none"),
		OPTION("structure"),
		OPTION("poop"),
		OPTION("lightmap"),
		OPTION("pathfinding"),
	};

	TAG_ENUM(error_report_flags, 5)
	{
		OPTION("rendered"),
		OPTION("tangent-space"),
		OPTION("non-critical"),
		OPTION("lightmap light"),
		OPTION("report key is valid"),
	};

} // namespace blofeld

