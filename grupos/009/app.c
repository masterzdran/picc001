#include <stdio.h>

unsigned int memcopyif(char *d, char *f, int n, char min, char max){
	int adr = (int)(&*d);
	int i;
	
	for( i = 0; i <= n; i++ ){
		if( (*((&*f) + i) >= min) && (*((&*f) + i) <= max) ){
			*d = ( *((&*f) + i) );
			d += 1;
		}
	}
	return( (int)((&*d) - adr)  );
}


int main(){
	char buffer[] = "                       "; //buffer lenght 20 
	char str[]    = "0123456789";
	unsigned int bytecopy;
	
	bytecopy = memcopyif( buffer, str, 5, '3', '9' ); 
	printf( "%d  ::  %s", bytecopy, buffer );
	return( 1 );
}
