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
