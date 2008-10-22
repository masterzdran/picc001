#include <stdio.h>

unsigned int memcopyif(char *d, char *f, int n, char min, char max){
	int adr = (int)(&*d);
	int i;
	
	for( i = 0; i <= n; i++ ){
		if( (*( f + i) >= min) && (*(f + i) <= max) ){
			*d = ( *(f + i) );
			d += 1;
		}
	}
	return( (int)((&*d) - adr)  );
}


int main(){
	//mem. dinamica
	char buffer[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0'}; //buffer lenght 20 
	char str[]    = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
	unsigned int bytecopy;
	
	bytecopy = memcopyif( buffer, str, 5, '3', '9' ); 
	printf( "%d  ::  %s", bytecopy, buffer );
	return( 1 );
}
