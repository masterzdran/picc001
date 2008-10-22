#include <stdio.h>
#include "isel.h"

void cap( char *s ){
	if( *s >= 'a' && *s <= 'z' ){
		*s = *s -32;
	}
}

void initCap( char *s ){
	cap( s );
	while( *s != '\0' ){
		if( *s == ' ' ){
			cap((s + 1 )); //proximo endereço
		}
		s += 1;
	}
}


int main(){
	//mem. dinamica
	char str[] = { ' ', ' ', ' ', ' ', 'j', 'o', 'a', 'o', ' ', ' ', ' ', ' ', ' ', 'm', 'a', 'r', 'i', 'a', ' ', ' ', ' ', ' ', 'd', 'e', ' ', 'A', 'f', 'o', 'n', 's', 'o', ' ', ' ', ' ', 'e', ' ', ' ', ' ', ' ', 'z', 'é', ' ', 'm', 'a', 'n', 'u', 'e', 'l', ' ', ' ', ' ', ' ', ' ', '\0'};
	reverse( str, sizeof( str ) );
    norepspaces( str );     
	initCap(str);
	printf( "str :: %s\n", str );
	return( 1 );
}
