#include <stdio.h>

void norepspaces( char *s){
	char *p;
	char *c;

	while( *s != '\0' ){
		if( *s == ' ' ){
			p = c = s + 1;
			while( (*p != '\0') )
			{ 
				if( *p != ' ' ){
					break;
				} 
				 p += 1; 
			}

			if( p > c ){
				while( *p != '\0' ){
					*c = *p;
					p += 1;
					c += 1;
				}
				*c = '\0';
			}
		}
		s += 1;
	}
}

int main(){
	//memoria dinamica
	char str[] = {' ', ' ', ' ', 'I', 'S', 'E', 'L', ' ', ' ', '2', '0', '0', '8', ' ', ' ', ' ', ' ', '2', '0', '0', '9', ' ', 'P', 'I', 'C', 'C', ' ', ' ', ' ', ' ', '\0'};
	printf("init str :: %s \n", str );
	norepspaces( str );
	printf( "end str  :: %s ", str );
	return( 1 );
}
