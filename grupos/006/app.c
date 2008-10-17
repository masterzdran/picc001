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
	char str[] = "ISEL";
	reverse( str, sizeof(str) );
	printf( "%s", str );
	return( 1 );
}
