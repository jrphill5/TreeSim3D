#ifndef BRANCH_H
#define BRANCH_H

#include "Plot.h"
#include <vector>

class Branch
{

	private:
		Plot* plot;
		vector< Branch* > children;
		int index;
		double* origin;
		double length;
		int order;
		int tiers;
		int tier;

	public:
		Branch( int index, double* origin, double length, int order, int tiers, int tier );
		~Branch();
		void display( bool show );

};

#endif
