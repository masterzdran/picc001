#include <stdio.h>

void verifyUnsignedTypes( unsigned int long l ){
  int majorBitOn = 0, index = 1;
  unsigned int long tmp = l;
  while( tmp != 0 ){
	  if( ( tmp & 0x01 ) == 1 ){
		  majorBitOn = index;
	  }

	  index += 1;
	  tmp >>= 1;
  }

  if( majorBitOn <= sizeof(char) * 8 ){
	  printf( "Para o valor %d pode ser utilizado o tipo char\n", l );
  }else if( majorBitOn <= sizeof(short)  * 8 ){
	   printf( "Para o valor %d pode ser utilizado o tipo short\n", l );
	  }else if( majorBitOn <= sizeof(int)  * 8 ){
		  printf( "Para o valor %d pode ser utilizado o tipo int\n", l );
          }else{
			  printf( "Para o valor %d pode ser utilizado o tipo long \n", l );
	       }
}

int main(){
	verifyUnsignedTypes(8); //Char
    verifyUnsignedTypes(65535); //Short
	verifyUnsignedTypes(65537); //int
	return( 1 );
}


