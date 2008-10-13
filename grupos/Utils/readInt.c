#include <stdio.h>
int readInt(){
  char  buffer[10];   
  int returnValue = 0;

  printf("Enter a value: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &returnValue);

  return( returnValue );
}

int main()
{
	int   value;       
	while( ( value = readInt() ) != 0 ){
	  printf("Nº %d \n", value);
	}        
    return  ;
}
