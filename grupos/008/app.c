#include <stdio.h>
//#include <isel.h>

//void norepspaces( char *s);
//void reverse( unsigned char *head, unsigned int len );

void cap( char *s ){
	if( *s >= 'a' && *s <= 'z' ){
		*s = *s -32;
	}
}

void initCap( char *s ){
	cap( s );
	while( *s != '\0' ){
		if( *s == ' ' ){
			cap(((&*s) + 1 )); //proximo endere�o
		}
		s += 1;
	}
}


int main(){
	char str[] = "jo�o maria de afonso e z� manuel";
	//reverse( str, sizeof( str ) );
    //norepspaces( str );     
	initCap(str);
	printf( "str :: %s\n", str );
	return( 1 );
}
