#include "Branch.h"

Branch::Branch( int index, double* origin, double length, int order, int tiers, int tier )
{

	plot = Plot::CreateInstance();

	this->index  = index;
	this->origin = origin;
	this->length = length;
	this->order  = order;
	this->tiers  = tiers;
	this->tier   = tier;


	if ( tier != tiers )
	{

		children.resize( order );
		for ( int i = 0; i < (int)children.size(); i++ )
			// this indexing scheme limits both order and tier to 9
			children[i] = new Branch( 10*index + i, origin, 1.5*length, order, tiers, tier+1 );

	}
	else children.resize( 0 );

}

Branch::~Branch()
{

}

void Branch::display( bool show )
{

	char command[128];
	if ( show )
	{

		sprintf( command, "set arrow %d from %f,%f,%f to %f,%f,%f lw 1 lc rgb \"#FF0000\"", index, origin[0], origin[1], origin[2], origin[0], origin[1], origin[2] + length );
		plot->write( command );

	}
	else
	{

		sprintf( command, "unset arrow %d", index );
		plot->write( command );

	}

	for ( int i = 0; i < (int)children.size(); i++ )
		children[i]->display( show );

}
