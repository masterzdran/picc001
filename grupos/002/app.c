#include <stdio.h>

void echoPlus(){
	unsigned int i;
	unsigned int c;
	unsigned int sbuffer = 0; //space buffer
	while( ( c = getchar() ) != EOF ){
		if( c == ' ' ){
			sbuffer += 1;
		}else{
			if( c != 13 ){
				for( i = 0; i < sbuffer; i++ ){
					printf( "%c", ' ' );
				}			
			}
		   sbuffer = 0;
		   printf( "%c", (char)c ); 
		}		
	}
}

int main(){
	echoPlus();
	return( 1 );
}
