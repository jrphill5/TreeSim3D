#ifndef PLOT_H
#define PLOT_H

#include <stdio.h>

using namespace std;

class Plot
{

	private:
		Plot();
        Plot(Plot const&){};
        void operator=(Plot const&){};
        static Plot* pInstance;
		FILE* gnuplot;

	public:
		~Plot();
		static Plot* CreateInstance();
		void write( const char* command );
		void refresh();

};

#endif
