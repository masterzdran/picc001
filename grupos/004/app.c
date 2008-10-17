#include <stdio.h>

int readInt(){
  char  buffer[10];   
  int returnValue = 0;

  printf("Enter a value: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &returnValue);

  return( returnValue );
}

int distance_zeros( unsigned int i ){
	int tmp = -1, majorDistance = 0, index = 0;
	while( i != 0 ){
		if( ( i & 1 ) == 0 ){
			tmp += 1;
		}else{
			if( tmp > majorDistance ){
				majorDistance = tmp;
			}
			tmp = -1;
		}
		i >>= 1;
		index += 1;
	}
	return( majorDistance );
}


void verifyMultipleDistanceZeros(){
	unsigned int value;       
	while( ( value = readInt() ) != 0 ){
	  printf("Nº %d \n", value);
	  printf( "No inteiro %d a maior distancia entre dois bits a 0 é %d.\n", value, distance_zeros(value) );
	}        
}

int main(){
	verifyMultipleDistanceZeros();
	return( 1 );
}
