#include <stdio.h>

void echoPlus(){
	int c;
	while( ( c = getchar() ) != EOF ){
		printf( "%c", (char)c ); 
	}
}

int main(){
	echoPlus();
	return( 1 );
}
