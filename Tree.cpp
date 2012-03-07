#include "Tree.h"

Tree::Tree( double* origin, double trunkh, int order, int tiers )
{

	plot = Plot::CreateInstance();

	this->origin = origin;
	this->trunkh = trunkh;
	this->order  = order;
	this->tiers  = tiers;

	this->trunk = new Branch( 1, origin, trunkh, order, tiers, 0 );

}

Tree::~Tree()
{

}

void Tree::display( bool show )
{

	this->trunk->display( show );

}
