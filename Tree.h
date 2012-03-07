#ifndef TREE_H
#define TREE_H

#include "Branch.h"

using namespace std;

class Tree
{

	private:
		Plot* plot;
		Branch* trunk;
		double* origin;	// 3-vector describing origin of tree {x,y,z}
		double trunkh;	// height of tree trunk
		int order;		// number of children each branch has
		int tiers;		// number of branch generations there are

	public:
		Tree( double* origin, double trunkh, int order, int tiers );
		~Tree();
		void display( bool show );

};

#endif
