#include <stdio.h>

void echoPlus(){
	unsigned int i;
	unsigned int c;
	unsigned int sbuffer = 0;  //space buffer
	unsigned char bline  = 0;  //blank line
	while( ( c = getchar() ) != EOF ){
		if( c == ' ' ){
			sbuffer += 1;
		}else{
			if( (c != 13) && (c != 10) ){
				for( i = 0; i < sbuffer; i++ ){ //Descarrega o buffer
					printf( "%c", ' ' );
				}
				bline = 1;				
			}
		   sbuffer = 0;
		   if( bline != 0 ){
		     printf( "%c", (char)c ); 
		   }
		}		

	   if( c == 10 ){
		   bline = 0;
	   }
	}
}

int main(){
	echoPlus();
	return( 1 );
}
