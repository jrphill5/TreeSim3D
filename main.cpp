#include "Plot.h"
#include "Tree.h"
#include <stdlib.h>
#include <signal.h>

#include <stdio.h>

using namespace std;

void sighandler( int signal );

Plot* plot;
Tree* tree;

int main()
{

	plot = Plot::CreateInstance();

	double origin[3] = { 0.0, 0.0, 0.0 };
	double length = 1.0;
	int order = 2;
	int tiers = 4;

	if ( order > 9 ) { printf("Order must be less than 10!\n"); exit(1); }
	if ( tiers > 9 ) { printf("Tiers must be less than 10!\n"); exit(1); }

	tree = new Tree( origin, length, order, tiers );
	tree->display( true );

	while ( true )
		signal(2, &sighandler);

	return 0;

}

void sighandler( int signal )
{

	plot->write("exit");
 	exit(1);

}
