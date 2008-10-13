#include <stdio.h>
char  line[100];   
int   value;       

int main()
{
    printf("Enter a value: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &value);
	while( value != 0 ){
	  printf("Nº %d \n", value);
	  printf("Enter a value: ");

	  fgets(line, sizeof(line), stdin);
      sscanf(line, "%d", &value);
	}        
    return  ;
}
