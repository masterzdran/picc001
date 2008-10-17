#include <stdio.h>

unsigned int reset_bits(unsigned int v, unsigned short int p, unsigned short int n){
	unsigned int mask = 0;
	unsigned short i;
	for( i = sizeof( mask ) * 8; i > 0; i-- ){
		if( !( (i >= p) && (i <= ( p + n ))) ){
			mask = mask | 1;   
		}
		mask <<= 1;
	}
	return( (v & mask) );
}

int main(){
	unsigned int v       = 56;
	unsigned short int p = 4;
    unsigned short int n = 1;
	printf( "Nº:: %d, n:: %d, p:: %d, parsed nº:: %d",  v, p, n, reset_bits( v, p, n ) );
	return( 1 );
}
