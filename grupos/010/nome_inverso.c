#include <stdio.h>

void reverse( char *s ){
	printf( "%s\n", s );
}

int main( int argv, char *argc[] ){
	unsigned int i;
	for( i = 1; i < argv; i++ ){
	  reverse( argc[i] ); 
	}
	return( 1 );
}
