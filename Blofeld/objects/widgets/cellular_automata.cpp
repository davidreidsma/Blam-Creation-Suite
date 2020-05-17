#include <blofeld-private-pch.h>

namespace blofeld
{

	TAG_GROUP_FROM_BLOCK(cellular_automata, CELLULAR_AUTOMATA_TAG, cellular_automata_block_block );

	TAG_BLOCK_FROM_STRUCT(cellular_automata_block, 1, cellular_automata_struct_definition_struct_definition );

	TAG_STRUCT(cellular_automata_struct_definition)
	{
		FIELD( _field_explanation, "parameters" ),
		FIELD( _field_short_integer, "updates per second:Hz" ),
		FIELD( _field_short_integer, " x (width):cells" ),
		FIELD( _field_short_integer, " y (depth):cells" ),
		FIELD( _field_short_integer, " z (height):cells" ),
		FIELD( _field_real, "x (width):world units" ),
		FIELD( _field_real, "y (depth):world units" ),
		FIELD( _field_real, "z (height):world units" ),
		FIELD( _field_pad, "EUJRJIT", 32 ),
		FIELD( _field_old_string_id, "marker" ),
		FIELD( _field_explanation, "cell birth" ),
		FIELD( _field_real_fraction, "cell birth chance:[0,1]" ),
		FIELD( _field_pad, "HXYEZXXRO", 32 ),
		FIELD( _field_explanation, "gene mutation" ),
		FIELD( _field_long_integer, "cell gene mutates 1 in:times" ),
		FIELD( _field_long_integer, "virus gene mutations 1 in:times" ),
		FIELD( _field_pad, "AM", 32 ),
		FIELD( _field_explanation, "cell infection" ),
		FIELD( _field_short_bounds, "infected cell lifespan:updates#the lifespan of a cell once infected" ),
		FIELD( _field_short_integer, "minimum infection age:updates#no cell can be infected before it has been alive this number of updates" ),
		FIELD( _field_pad, "GCKNPCPT", 2 ),
		FIELD( _field_real_fraction, "cell infection chance:[0,1]" ),
		FIELD( _field_real_fraction, "infection threshold:[0,1]#0.0 is most difficult for the virus, 1.0 means any virus can infect any cell" ),
		FIELD( _field_pad, "SGUUFL", 32 ),
		FIELD( _field_explanation, "initial state" ),
		FIELD( _field_real_fraction, "new cell filled chance:[0,1]" ),
		FIELD( _field_real_fraction, "new cell infected chance:[0,1]" ),
		FIELD( _field_pad, "YKYHDOBT", 32 ),
		FIELD( _field_explanation, "detail texture" ),
		FIELD( _field_real_fraction, "detail texture change chance:[0,1]" ),
		FIELD( _field_pad, "GPMSPRZN", 32 ),
		FIELD( _field_short_integer, "detail texture width:cells#the number of cells repeating across the detail texture in both dimensions" ),
		FIELD( _field_pad, "BXHH", 2 ),
		FIELD( _field_tag_reference, "detail texture" ),
		FIELD( _field_explanation, "mask texture" ),
		FIELD( _field_pad, "VPK", 32 ),
		FIELD( _field_tag_reference, "mask bitmap" ),
		FIELD( _field_pad, "BW", 240 ),
		FIELD( _field_terminator )
	};

} // namespace blofeld

