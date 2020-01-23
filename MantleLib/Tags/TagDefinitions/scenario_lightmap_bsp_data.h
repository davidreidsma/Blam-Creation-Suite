#pragma once

struct nicename("Scenario Lightmap Bsp Data") group('Lbsp') s_scenario_lightmap_bsp_data_definition
{
	struct s_unknown_a_block_definition;
	struct s_unknown_b_block_definition;
	struct nicename("Instanced Geometry") s_instanced_geometry_block_definition;
	struct nicename("Colors") s_color_block_definition;
	struct nicename("Meshes") s_mesh_block_definition;
	struct nicename("Compression Info") s_compression_info_block_definition;
	struct s_unknown_nodey_block_definition;
	struct s_unknown_7_block_definition;
	struct nicename("Node Maps") s_node_map_block_definition;
	struct s_unknown_yo_block_definition;
	struct nicename("Water Meshes") s_water_mesh_block_definition;
	struct s_unknown_compression_info_block_definition;
	struct s_unknown_10_block_definition;
	struct nicename("Airprobes") s_airprobe_block_definition;
	struct s_unknown_12_block_definition;
	struct s_unknown_13_block_definition;
	struct nicename("Compile Data") s_compile_datum_block_definition;

	signed short __unknown; 
	signed short nicename("BSP Index") bsp_index; 
	signed int nicename("Structure Checksum") structure_checksum; 
	TagReference __unknown2_reference; 
	float nicename("Brightness") brightness; 
	TagReference nicename("Primary Map") primary_map_reference; 
	TagReference nicename("Intensity Map") intensity_map_reference; 
	Unknown32 __unknown3; 
	Unknown32 __unknown4; 
	Unknown32 __unknown5; 
	s_tag_block_definition<s_unknown_a_block_definition> __unknown_a_block; 
	s_tag_block_definition<s_unknown_b_block_definition> __unknown_b_block; 
	s_tag_block_definition<s_instanced_geometry_block_definition> nicename("Instanced Geometry") instanced_geometry_block; 
	s_tag_block_definition<s_color_block_definition> nicename("Colors") colors_block; 
	signed int __unknown6; 
	s_tag_block_definition<s_mesh_block_definition> nicename("Meshes") meshes_block; 
	s_tag_block_definition<s_compression_info_block_definition> nicename("Compression Info") compression_info_block; 
	s_tag_block_definition<s_unknown_nodey_block_definition> __unknown_nodey_block; 
	s_tag_block_definition<s_unknown_7_block_definition> __unknown_7_block; 
	Unknown32 __unknown7; 
	Unknown32 __unknown8; 
	Unknown32 __unknown9; 
	Unknown32 __unknown10; 
	Unknown32 __unknown11; 
	Unknown32 __unknown12; 
	s_tag_block_definition<s_node_map_block_definition> nicename("Node Maps") node_maps_block; 
	Unknown32 __unknown13; 
	Unknown32 __unknown14; 
	Unknown32 __unknown15; 
	Unknown32 __unknown16; 
	Unknown32 __unknown17; 
	Unknown32 __unknown18; 
	Unknown32 __unknown19; 
	Unknown32 __unknown20; 
	Unknown32 __unknown21; 
	s_tag_block_definition<s_unknown_yo_block_definition> __unknown_yo_block; 
	s_tag_block_definition<s_water_mesh_block_definition> nicename("Water Meshes") water_meshes_block; 
	signed int nicename("[zone] Asset Datum") zone_asset_datum; 
	unsigned short nicename("[easy read] Index") easy_read_index; 
	unsigned short nicename("[easy read] Salt") easy_read_salt; 
	signed int nicename("Useless Padding") useless_padding; 
	s_tag_block_definition<s_unknown_compression_info_block_definition> __unknown_compression_info_block; 
	s_tag_block_definition<s_unknown_10_block_definition> __unknown_10_block; 
	s_tag_block_definition<s_airprobe_block_definition> nicename("Airprobes") airprobes_block; 
	s_tag_block_definition<s_unknown_12_block_definition> __unknown_12_block; 
	s_tag_block_definition<s_unknown_13_block_definition> __unknown_13_block; 
	Unknown32 __unknown22; 
	Unknown32 __unknown23; 
	Unknown32 __unknown24; 
	s_tag_block_definition<s_compile_datum_block_definition> nicename("Compile Data") compile_data_block; 

	struct s_unknown_a_block_definition
	{
		signed short __unknown_index; 
		signed short __unknown; 
	};

	struct s_unknown_b_block_definition
	{
		signed int __unknown; 
		Unknown32 __unknown2; 
	};

	struct nicename("instanced_geometry") s_instanced_geometry_block_definition
	{
		signed short __unknown; 
		signed short __unknown_a_index; 
		signed short nicename("Coloring Index") coloring_index; 
		signed short __unknown2; 
		unsigned int __unknown3; 
	};

	struct nicename("color") s_color_block_definition
	{
		float __unknown; 
		float __unknown2; 
		float nicename("Red") red; 
		float nicename("Blue") blue; 
		float __unknown3; 
		signed int __unknown4; 
		float __unknown5; 
		float __unknown6; 
		unsigned int __unknown7; 
	};

	struct nicename("mesh") s_mesh_block_definition
	{
		struct nicename("Parts") s_part_block_definition;
		struct nicename("Subparts") s_subpart_block_definition;
		struct nicename("Instanced Geometry Indices") s_instanced_geometry_index_block_definition;
		struct s_unknown_water_block_definition;

		s_tag_block_definition<s_part_block_definition> nicename("Parts") parts_block; 
		s_tag_block_definition<s_subpart_block_definition> nicename("Subparts") subparts_block; 
		signed short nicename("Vertex Buffer Index 1") vertex_buffer_index_1; 
		signed short nicename("Vertex Buffer Index 2") vertex_buffer_index_2; 
		signed short nicename("Vertex Buffer Index 3") vertex_buffer_index_3; 
		signed short nicename("Vertex Buffer Index 4") vertex_buffer_index_4; 
		signed short nicename("Vertex Buffer Index 5") vertex_buffer_index_5; 
		signed short nicename("Vertex Buffer Index 6") vertex_buffer_index_6; 
		signed short nicename("Vertex Buffer Index 7") vertex_buffer_index_7; 
		signed short nicename("Vertex Buffer Index 8") vertex_buffer_index_8; 
		signed short nicename("Index Buffer Index 1") index_buffer_index_1; 
		signed short nicename("Index Buffer Index 2") index_buffer_index_2; 
		unsigned short nicename("Flags") flags; 
		signed char nicename("Rigid Node") rigid_node; 
		signed char nicename("Vertex Type") vertex_type; 
		signed char nicename("PRT Type") prt_type; 
		signed char __unknown; 
		signed char nicename("Index Buffer Type") index_buffer_type; 
		signed char __unknown2; 
		s_tag_block_definition<s_instanced_geometry_index_block_definition> nicename("Instanced Geometry Indices") instanced_geometry_indices_block; 
		s_tag_block_definition<s_unknown_water_block_definition> __unknown_water_block; 
		Unknown32 __unknown3; 
		Unknown32 __unknown4; 
		Unknown32 __unknown5; 
		Unknown32 __unknown6; 

		struct nicename("part") s_part_block_definition
		{
			signed short nicename("Material Index") material_index; 
			signed short nicename("'Unknown Nodey' Index") _unknown_nodey__index; 
			signed int nicename("Index Buffer Start") index_buffer_start; 
			signed int nicename("Index Buffer Count") index_buffer_count; 
			signed short nicename("Subpart Start") subpart_start; 
			signed short nicename("Subpart Count") subpart_count; 
			signed char __unknown_enum; 
			signed char __unknown; 
			signed char __unknown2; 
			signed char __unknown3; 
			signed short nicename("Vertex Count") vertex_count; 
			signed short __unknown4; 
		};

		struct nicename("subpart") s_subpart_block_definition
		{
			signed int nicename("Index Buffer Start") index_buffer_start; 
			signed int nicename("Index Buffer Count") index_buffer_count; 
			signed short nicename("Part Index") part_index; 
			signed short nicename("Vertex Count") vertex_count; 
			signed int __unknown; 
		};

		struct nicename("instanced_geometry_index") s_instanced_geometry_index_block_definition
		{
			struct nicename("Instanced Geometry Mesh Contents") s_instanced_geometry_mesh_content_block_definition;

			signed short nicename("Instanced Geometry Mesh Index 1") instanced_geometry_mesh_index_1; 
			signed short nicename("Instanced Geometry Mesh Index 2") instanced_geometry_mesh_index_2; 
			s_tag_block_definition<s_instanced_geometry_mesh_content_block_definition> nicename("Instanced Geometry Mesh Contents") instanced_geometry_mesh_contents_block; 

			struct nicename("instanced_geometry_mesh_content") s_instanced_geometry_mesh_content_block_definition
			{
				signed short nicename("Instanced Geometry Index") instanced_geometry_index; 
			};
		};

		struct s_unknown_water_block_definition
		{
			signed short __unknown; 
		};
	};

	struct nicename("compression_info") s_compression_info_block_definition
	{
		signed short __unknown; 
		signed short __unknown2; 
		float nicename("Position Bounds X min") position_bounds_x_min; 
		float nicename("Position Bounds X max") position_bounds_x_max; 
		float nicename("Position Bounds Y min") position_bounds_y_min; 
		float nicename("Position Bounds Y max") position_bounds_y_max; 
		float nicename("Position Bounds Z min") position_bounds_z_min; 
		float nicename("Position Bounds Z max") position_bounds_z_max; 
		float nicename("Texcoord Bounds X min") texcoord_bounds_x_min; 
		float nicename("Texcoord Bounds X max") texcoord_bounds_x_max; 
		float nicename("Texcoord Bounds Y min") texcoord_bounds_y_min; 
		float nicename("Texcoord Bounds Y max") texcoord_bounds_y_max; 
		Unknown32 __unknown3; 
		Unknown32 __unknown4; 
	};

	struct s_unknown_nodey_block_definition
	{
		float __unknown; 
		float __unknown2; 
		float __unknown3; 
		float __unknown4; 
		float __unknown5; 
		float __unknown6; 
		float __unknown7; 
		float __unknown8; 
		signed char nicename("Node Index") node_index; 
		signed char nicename("Node Index") node_index2; 
		signed char nicename("Node Index") node_index3; 
		signed char nicename("Node Index") node_index4; 
		float __unknown9; 
		float __unknown10; 
		float __unknown11; 
	};

	struct s_unknown_7_block_definition
	{
		signed short __unknown; 
		signed short __unknown2; 
		DataReference __unknown3_data_reference; 
	};

	struct nicename("node_map") s_node_map_block_definition
	{
		struct s_unknown_block_definition;

		s_tag_block_definition<s_unknown_block_definition> __unknown_block; 

		struct s_unknown_block_definition
		{
			unsigned char nicename("Node Index") node_index; 
		};
	};

	struct s_unknown_yo_block_definition
	{
		signed short __unknown_index; 
	};

	struct nicename("water_mesh") s_water_mesh_block_definition
	{
		signed short nicename("Mesh Index") mesh_index; 
		signed short __unknown; 
		float nicename("X Min") x_min; 
		float nicename("X Max") x_max; 
		float nicename("Y Min") y_min; 
		float nicename("Y Max") y_max; 
		float nicename("Z Min") z_min; 
		float nicename("Z Max") z_max; 
	};

	struct s_unknown_compression_info_block_definition
	{
		unsigned int nicename("Polyart Asset Address") polyart_asset_address; 
		Unknown32 __unknown; 
		Unknown32 __unknown2; 
	};

	struct s_unknown_10_block_definition
	{
		struct s_unknown_11_block_definition;

		s_tag_block_definition<s_unknown_11_block_definition> __unknown_11_block; 

		struct s_unknown_11_block_definition
		{
			Unknown32 __unknown; 
		};
	};

	struct nicename("airprobe") s_airprobe_block_definition
	{
		Unknown32 __unknown; 
		Unknown32 __unknown2; 
		Unknown32 __unknown3; 
		string_id nicename("Name") name; 
		Unknown32 __unknown4; 
		Unknown32 __unknown5; 
		Unknown32 __unknown6; 
		Unknown32 __unknown7; 
		Unknown32 __unknown8; 
		Unknown32 __unknown9; 
		Unknown32 __unknown10; 
		Unknown32 __unknown11; 
		Unknown32 __unknown12; 
		Unknown32 __unknown13; 
	};

	struct s_unknown_12_block_definition
	{
		Unknown32 __unknown; 
		Unknown32 __unknown2; 
		Unknown32 __unknown3; 
		Unknown32 __unknown4; 
		Unknown32 __unknown5; 
		Unknown32 __unknown6; 
		Unknown32 __unknown7; 
		Unknown32 __unknown8; 
		Unknown32 __unknown9; 
		Unknown32 __unknown10; 
		Unknown32 __unknown11; 
	};

	struct s_unknown_13_block_definition
	{
		struct s_unknown_14_block_definition;

		Unknown32 __unknown; 
		Unknown32 __unknown2; 
		Unknown32 __unknown3; 
		Unknown32 __unknown4; 
		Unknown32 __unknown5; 
		Unknown32 __unknown6; 
		Unknown32 __unknown7; 
		Unknown32 __unknown8; 
		s_tag_block_definition<s_unknown_14_block_definition> __unknown_14_block; 

		struct s_unknown_14_block_definition
		{
			Unknown32 __unknown; 
			Unknown32 __unknown2; 
			Unknown32 __unknown3; 
			Unknown32 __unknown4; 
			Unknown32 __unknown5; 
			Unknown32 __unknown6; 
			Unknown32 __unknown7; 
			Unknown32 __unknown8; 
			Unknown32 __unknown9; 
			Unknown32 __unknown10; 
			Unknown32 __unknown11; 
			Unknown32 __unknown12; 
		};
	};

	struct nicename("compile_datum") s_compile_datum_block_definition
	{
		char nicename("Date") date[32];
		char nicename("Culprit") culprit[32];
		char nicename("Build") build[256];
		char nicename("Command") command[256];
	};
};
