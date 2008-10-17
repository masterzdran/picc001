#include <stdio.h>
#include "isel.h"


int main( int argv, char *argc[] ){
	unsigned int adr;
	unsigned int i;
	unsigned int size;
	for( i = 1; i < argv; i++ ){
		size = 0;
		adr = (int)argc[i];
		while( *argc[i] != '\0' ){
			argc[i] += 1; 
			size += 1;
		}
		argc[i] = adr;
	  reverse(argc[i], (size + 1)); 
	  printf( "%s ", argc[i]);
	}
	return( 1 );
}
