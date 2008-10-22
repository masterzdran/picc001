#include <stdio.h>

void reverse( unsigned char *head, unsigned int len ){	
	unsigned char *tail = head + (len - 2);
	unsigned char tmp;
	
	while( head < tail ){
		tmp = *head;
		*head = *tail;
		*tail = tmp;

		head += 1;
		tail -= 1;
	}
}

int main(){
	//memoria dinamica
	char str[] = {'I','S','E','L','\0'};
	reverse( str, sizeof(str) );
	printf( "%s\n", str );
	return( 1 );
}
