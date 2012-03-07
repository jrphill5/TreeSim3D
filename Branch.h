#ifndef BRANCH_H
#define BRANCH_H

#include "Plot.h"
#include <vector>

class Branch
{

	private:
		Plot* plot;
		vector< Branch* > children;

	public:
		Branch();
		~Branch();

};

#endif
