#pragma once

struct nicename("Render Model") group('mode') s_render_model_definition
{
	struct nicename("Regions") s_region_block_definition;
	struct nicename("Instances") s_instance_block_definition;
	struct nicename("Nodes") s_node_block_definition;
	struct nicename("Marker Groups") s_marker_group_block_definition;
	struct nicename("Materials") s_material_block_definition;
	struct nicename("Meshes") s_mesh_block_definition;
	struct nicename("Compression Info") s_compression_info_block_definition;
	struct s_unknown_nodey_block_definition;
	struct s_unknown_8_block_definition;
	struct nicename("Node Maps") s_node_map_block_definition;
	struct s_unknown_yo_block_definition;
	struct nicename("Water Meshes") s_water_mesh_block_definition;
	struct s_unknown_compression_info_block_definition;
	struct s_unknown_node_block_definition;
	struct s_unknown_11_block_definition;
	struct s_unknown_12_block_definition;
	struct nicename("Runtime Nodes") s_runtime_node_block_definition;

	string_id nicename("Name") name; 
	unsigned short nicename("Flags") flags; 
	signed short __unknown; 
	signed int nicename("Model Checksum") model_checksum; 
	s_tag_block_definition<s_region_block_definition> nicename("Regions") regions_block; 
	Unknown32 __unknown2; 
	signed int nicename("Instance Starting Mesh Index") instance_starting_mesh_index; 
	s_tag_block_definition<s_instance_block_definition> nicename("Instances") instances_block; 
	Unknown32 __unknown3; 
	s_tag_block_definition<s_node_block_definition> nicename("Nodes") nodes_block; 
	s_tag_block_definition<s_marker_group_block_definition> nicename("Marker Groups") marker_groups_block; 
	s_tag_block_definition<s_material_block_definition> nicename("Materials") materials_block; 
	Unknown32 __unknown4; 
	Unknown32 __unknown5; 
	Unknown32 __unknown6; 
	Unknown32 __unknown7; 
	signed int __unknown8; 
	s_tag_block_definition<s_mesh_block_definition> nicename("Meshes") meshes_block; 
	s_tag_block_definition<s_compression_info_block_definition> nicename("Compression Info") compression_info_block; 
	s_tag_block_definition<s_unknown_nodey_block_definition> __unknown_nodey_block; 
	s_tag_block_definition<s_unknown_8_block_definition> __unknown_8_block; 
	Unknown32 __unknown9; 
	Unknown32 __unknown10; 
	Unknown32 __unknown11; 
	Unknown32 __unknown12; 
	Unknown32 __unknown13; 
	Unknown32 __unknown14; 
	s_tag_block_definition<s_node_map_block_definition> nicename("Node Maps") node_maps_block; 
	Unknown32 __unknown15; 
	Unknown32 __unknown16; 
	Unknown32 __unknown17; 
	Unknown32 __unknown18; 
	Unknown32 __unknown19; 
	Unknown32 __unknown20; 
	Unknown32 __unknown21; 
	Unknown32 __unknown22; 
	Unknown32 __unknown23; 
	s_tag_block_definition<s_unknown_yo_block_definition> __unknown_yo_block; 
	s_tag_block_definition<s_water_mesh_block_definition> nicename("Water Meshes") water_meshes_block; 
	signed int nicename("[zone] Asset Datum") zone_asset_datum; 
	unsigned short nicename("[easy read] Index") easy_read_index; 
	unsigned short nicename("[easy read] Salt") easy_read_salt; 
	signed int nicename("Useless Padding") useless_padding; 
	s_tag_block_definition<s_unknown_compression_info_block_definition> __unknown_compression_info_block; 
	s_tag_block_definition<s_unknown_node_block_definition> __unknown_nodes_block; 
	s_tag_block_definition<s_unknown_11_block_definition> __unknown_11_block; 
	Unknown32 __unknown_a; 
	Unknown32 __unknown_a2; 
	Unknown32 __unknown_a3; 
	Unknown32 __unknown_a4; 
	Unknown32 __unknown_a5; 
	Unknown32 __unknown_a6; 
	Unknown32 __unknown_a7; 
	Unknown32 __unknown_a8; 
	Unknown32 __unknown_a9; 
	Unknown32 __unknown_a10; 
	Unknown32 __unknown_a11; 
	Unknown32 __unknown_a12; 
	Unknown32 __unknown_a13; 
	Unknown32 __unknown_a14; 
	Unknown32 __unknown_a15; 
	Unknown32 __unknown_a16; 
	Unknown32 __unknown_b; 
	Unknown32 __unknown_b2; 
	Unknown32 __unknown_b3; 
	Unknown32 __unknown_b4; 
	Unknown32 __unknown_b5; 
	Unknown32 __unknown_b6; 
	Unknown32 __unknown_b7; 
	Unknown32 __unknown_b8; 
	Unknown32 __unknown_b9; 
	Unknown32 __unknown_b10; 
	Unknown32 __unknown_b11; 
	Unknown32 __unknown_b12; 
	Unknown32 __unknown_b13; 
	Unknown32 __unknown_b14; 
	Unknown32 __unknown_b15; 
	Unknown32 __unknown_b16; 
	Unknown32 __unknown_c; 
	Unknown32 __unknown_c2; 
	Unknown32 __unknown_c3; 
	Unknown32 __unknown_c4; 
	Unknown32 __unknown_c5; 
	Unknown32 __unknown_c6; 
	Unknown32 __unknown_c7; 
	Unknown32 __unknown_c8; 
	Unknown32 __unknown_c9; 
	Unknown32 __unknown_c10; 
	Unknown32 __unknown_c11; 
	Unknown32 __unknown_c12; 
	Unknown32 __unknown_c13; 
	Unknown32 __unknown_c14; 
	Unknown32 __unknown_c15; 
	Unknown32 __unknown_c16; 
	Unknown32 __unknown24; 
	Unknown32 __unknown25; 
	Unknown32 __unknown26; 
	Unknown32 __unknown27; 
	Unknown32 __unknown28; 
	Unknown32 __unknown29; 
	Unknown32 __unknown30; 
	Unknown32 __unknown31; 
	Unknown32 __unknown32; 
	Unknown32 __unknown33; 
	Unknown32 __unknown34; 
	Unknown32 __unknown35; 
	Unknown32 __unknown36; 
	Unknown32 __unknown37; 
	Unknown32 __unknown38; 
	Unknown32 __unknown39; 
	Unknown32 __unknown40; 
	Unknown32 __unknown41; 
	Unknown32 __unknown42; 
	Unknown32 __unknown43; 
	Unknown32 __unknown44; 
	Unknown32 __unknown45; 
	Unknown32 __unknown46; 
	Unknown32 __unknown47; 
	Unknown32 __unknown48; 
	Unknown32 __unknown49; 
	s_tag_block_definition<s_unknown_12_block_definition> __unknown_12_block; 
	s_tag_block_definition<s_runtime_node_block_definition> nicename("Runtime Nodes") runtime_nodes_block; 

	struct nicename("region") s_region_block_definition
	{
		struct nicename("Permutations") s_permutation_block_definition;

		string_id nicename("Name") name; 
		s_tag_block_definition<s_permutation_block_definition> nicename("Permutations") permutations_block; 

		struct nicename("permutation") s_permutation_block_definition
		{
			string_id nicename("Name") name; 
			signed short nicename("Mesh Index") mesh_index; 
			signed short nicename("Mesh Count") mesh_count; 
			signed int nicename("Instance Flags 1") instance_flags_1; 
			signed int nicename("Instance Flags 2") instance_flags_2; 
			signed int nicename("Instance Flags 3") instance_flags_3; 
			signed int nicename("Instance Flags 4") instance_flags_4; 
		};
	};

	struct nicename("instance") s_instance_block_definition
	{
		string_id nicename("Name") name; 
		signed int nicename("Node Index") node_index; 
		float nicename("Default Scale") default_scale; 
		float nicename("Inverse Forward i") inverse_forward_i; 
		float nicename("Inverse Forward j") inverse_forward_j; 
		float nicename("Inverse Forward k") inverse_forward_k; 
		float nicename("Inverse Left i") inverse_left_i; 
		float nicename("Inverse Left j") inverse_left_j; 
		float nicename("Inverse Left k") inverse_left_k; 
		float nicename("Inverse Up i") inverse_up_i; 
		float nicename("Inverse Up j") inverse_up_j; 
		float nicename("Inverse Up k") inverse_up_k; 
		float nicename("Inverse Position x") inverse_position_x; 
		float nicename("Inverse Position y") inverse_position_y; 
		float nicename("Inverse Position z") inverse_position_z; 
	};

	struct nicename("node") s_node_block_definition
	{
		string_id nicename("Name") name; 
		signed short nicename("Parent Node") parent_node; 
		signed short nicename("First Child Node") first_child_node; 
		signed short nicename("Next Sibling Node") next_sibling_node; 
		signed short nicename("Import Node Index") import_node_index; 
		float nicename("Default Translation x") default_translation_x; 
		float nicename("Default Translation y") default_translation_y; 
		float nicename("Default Translation z") default_translation_z; 
		float nicename("Default Rotation i") default_rotation_i; 
		float nicename("Default Rotation j") default_rotation_j; 
		float nicename("Default Rotation k") default_rotation_k; 
		float nicename("Default Rotation w") default_rotation_w; 
		float nicename("Default Scale") default_scale; 
		float nicename("Inverse Forward i") inverse_forward_i; 
		float nicename("Inverse Forward j") inverse_forward_j; 
		float nicename("Inverse Forward k") inverse_forward_k; 
		float nicename("Inverse Left i") inverse_left_i; 
		float nicename("Inverse Left j") inverse_left_j; 
		float nicename("Inverse Left k") inverse_left_k; 
		float nicename("Inverse Up i") inverse_up_i; 
		float nicename("Inverse Up j") inverse_up_j; 
		float nicename("Inverse Up k") inverse_up_k; 
		float nicename("Inverse Position x") inverse_position_x; 
		float nicename("Inverse Position y") inverse_position_y; 
		float nicename("Inverse Position z") inverse_position_z; 
		float nicename("Distance from Parent") distance_from_parent; 
	};

	struct nicename("marker_group") s_marker_group_block_definition
	{
		struct nicename("Markers") s_marker_block_definition;

		string_id nicename("Name") name; 
		s_tag_block_definition<s_marker_block_definition> nicename("Markers") markers_block; 

		struct nicename("marker") s_marker_block_definition
		{
			signed char nicename("Region Index") region_index; 
			signed char nicename("Permutation Index") permutation_index; 
			signed char nicename("Node Index") node_index; 
			signed char __unknown; 
			float nicename("Translation x") translation_x; 
			float nicename("Translation y") translation_y; 
			float nicename("Translation z") translation_z; 
			float nicename("Rotation i") rotation_i; 
			float nicename("Rotation j") rotation_j; 
			float nicename("Rotation k") rotation_k; 
			float nicename("Rotation w") rotation_w; 
			Unknown32 __unknown2; 
			Unknown32 __unknown3; 
			Unknown32 __unknown4; 
			Unknown32 __unknown5; 
		};
	};

	struct nicename("material") s_material_block_definition
	{
		TagReference nicename("Shader") shader_reference; 
		signed int __unknown; 
		float __unknown2; 
		Unknown32 __unknown3; 
		signed char __unknown4; 
		signed char __unknown5; 
		signed char __unknown6; 
		signed char __unknown7; 
		float __unknown8; 
		float __unknown9; 
		signed char __unknown10; 
		signed char nicename("Breakable Surface Index") breakable_surface_index; 
		signed char __unknown11; 
		signed char __unknown12; 
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

	struct s_unknown_8_block_definition
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

	struct s_unknown_node_block_definition
	{
		signed short __unknown; 
	};

	struct s_unknown_11_block_definition
	{
		Unknown32 __unknown; 
		Unknown32 __unknown2; 
		Unknown32 __unknown3; 
		Unknown32 __unknown4; 
		Unknown32 __unknown5; 
		Unknown32 __unknown6; 
		Unknown32 __unknown7; 
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
		Unknown32 __unknown12; 
		Unknown32 __unknown13; 
		Unknown32 __unknown14; 
		Unknown32 __unknown15; 
		Unknown32 __unknown16; 
		Unknown32 __unknown17; 
		Unknown32 __unknown18; 
		Unknown32 __unknown19; 
		Unknown32 __unknown20; 
		Unknown32 __unknown21; 
		Unknown32 __unknown22; 
		Unknown32 __unknown23; 
		Unknown32 __unknown24; 
		Unknown32 __unknown25; 
		Unknown32 __unknown26; 
		Unknown32 __unknown27; 
		Unknown32 __unknown28; 
		Unknown32 __unknown29; 
		Unknown32 __unknown30; 
		Unknown32 __unknown31; 
		Unknown32 __unknown32; 
		Unknown32 __unknown33; 
		Unknown32 __unknown34; 
		Unknown32 __unknown35; 
		Unknown32 __unknown36; 
		Unknown32 __unknown37; 
		Unknown32 __unknown38; 
		Unknown32 __unknown39; 
		Unknown32 __unknown40; 
		Unknown32 __unknown41; 
		Unknown32 __unknown42; 
		Unknown32 __unknown43; 
		Unknown32 __unknown44; 
		Unknown32 __unknown45; 
		Unknown32 __unknown46; 
		Unknown32 __unknown47; 
		Unknown32 __unknown48; 
		Unknown32 __unknown49; 
		Unknown32 __unknown50; 
		Unknown32 __unknown51; 
		Unknown32 __unknown52; 
		Unknown32 __unknown53; 
		Unknown32 __unknown54; 
		Unknown32 __unknown55; 
		Unknown32 __unknown56; 
		Unknown32 __unknown57; 
		Unknown32 __unknown58; 
		Unknown32 __unknown59; 
		Unknown32 __unknown60; 
		Unknown32 __unknown61; 
		Unknown32 __unknown62; 
		Unknown32 __unknown63; 
		Unknown32 __unknown64; 
		Unknown32 __unknown65; 
		Unknown32 __unknown66; 
		Unknown32 __unknown67; 
		Unknown32 __unknown68; 
		Unknown32 __unknown69; 
		Unknown32 __unknown70; 
		Unknown32 __unknown71; 
		Unknown32 __unknown72; 
		Unknown32 __unknown73; 
		Unknown32 __unknown74; 
		Unknown32 __unknown75; 
		Unknown32 __unknown76; 
		Unknown32 __unknown77; 
		Unknown32 __unknown78; 
		Unknown32 __unknown79; 
		Unknown32 __unknown80; 
		Unknown32 __unknown81; 
		Unknown32 __unknown82; 
		Unknown32 __unknown83; 
		Unknown32 __unknown84; 
	};

	struct nicename("runtime_node") s_runtime_node_block_definition
	{
		float nicename("Default Rotation i") default_rotation_i; 
		float nicename("Default Rotation j") default_rotation_j; 
		float nicename("Default Rotation k") default_rotation_k; 
		float nicename("Default Rotation w") default_rotation_w; 
		float nicename("Default Translation x") default_translation_x; 
		float nicename("Default Translation y") default_translation_y; 
		float nicename("Default Translation z") default_translation_z; 
		float nicename("Default Scale") default_scale; 
	};
};
