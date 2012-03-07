#include "Plot.h"
#include "Tree.h"
#include <stdlib.h>
#include <signal.h>

using namespace std;

void sighandler( int signal );

Plot* plot;
Tree* tree;

int main()
{

	plot = Plot::CreateInstance();
	tree = new Tree();

	while ( true )
		signal(2, &sighandler);

	return 0;

}

void sighandler( int signal )
{

	plot->write("exit");
 	exit(1);

}
