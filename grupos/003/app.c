#include <stdio.h>

int distance_zeros( unsigned int i ){
	int tmp = -1, majorDistance = 0, index = 0;
	while( i != 0 ){
		if( ( i & 1 ) == 0 ){
			tmp += 1;
		}else{
			if( tmp > majorDistance ){
				majorDistance = tmp;
			}
			tmp = -1;
		}
		i >>= 1;
		index += 1;
	}
	return( majorDistance );
}

int main(){	
	printf( "No inteiro %d a maior distancia entre dois bits a 0 é %d", 8, distance_zeros(8) );
	return( 0 );
}
