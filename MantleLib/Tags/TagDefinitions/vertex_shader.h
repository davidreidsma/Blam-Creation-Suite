#pragma once

struct nicename("Vertex Shader") group('vtsh') s_vertex_shader_definition
{
	struct s_unknown_0_block_definition;
	struct nicename("Vertex Shaders") s_vertex_shader2_block_definition;

	Unknown32 __unknown; 
	s_tag_block_definition<s_unknown_0_block_definition> __unknown_0_block; 
	Unknown32 __unknown2; 
	s_tag_block_definition<s_vertex_shader2_block_definition> nicename("Vertex Shaders") vertex_shaders_block; 

	struct s_unknown_0_block_definition
	{
		struct s_unknown_1_block_definition;

		s_tag_block_definition<s_unknown_1_block_definition> __unknown_1_block; 

		struct s_unknown_1_block_definition
		{
			signed short __unknown; 
		};
	};

	struct nicename("vertex_shader2") s_vertex_shader2_block_definition
	{
		struct s_unknown_block_definition;
		struct s_unknown2_block_definition;

		Unknown32 __unknown; 
		DataReference __unknown2_data_reference; 
		DataReference __unknown3_data_reference; 
		DataReference __unknown4_data_reference; 
		Unknown32 __unknown5; 
		Unknown32 __unknown6; 
		Unknown32 __unknown7; 
		Unknown32 __unknown8; 
		Unknown32 __unknown9; 
		Unknown32 __unknown10; 
		s_tag_block_definition<s_unknown_block_definition> __unknown11_block; 
		signed int __unknown12; 
		Unknown32 __unknown13; 
		signed int __unknown14; 
		s_tag_block_definition<s_unknown2_block_definition> __unknown15_block; 
		signed int __unknown16; 
		Unknown32 __unknown17; 
		signed int __unknown18; 
		Unknown32 __unknown19; 
		Unknown32 __unknown20; 
		Unknown32 __unknown21; 
		Unknown32 __unknown22; 

		struct s_unknown_block_definition
		{
			string_id __unknown; 
			signed char __unknown2; 
			signed char __unknown3; 
			signed char __unknown4; 
			signed char __unknown5; 
		};

		struct s_unknown2_block_definition
		{
			string_id __unknown; 
			signed char __unknown2; 
			signed char __unknown3; 
			signed char __unknown4; 
			signed char __unknown5; 
		};
	};
};
