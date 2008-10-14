#include <stdio.h>
#include <stdlib.h>

/*------------------------------------------------------------------------------
 *Exercicio 1:
 * Faça um programa que indique qual dos tipos unsigned (char, short int, int ou
 *long int) pode armazenar o valor inteiro positivo introduzido pelo utilizador.
 * O programa deve funcionar para qualquer tipo de arquitectura.
 *------------------------------------------------------------------------------
 */
void verifyUnsignedTypes(unsigned int nbr){
    unsigned char c=1;
    unsigned short int si=1;
    unsigned int i=1;
    unsigned int x;

    for (x=1;x<sizeof(c)*8;x++)c<<=1;
    for (x=1;x<sizeof(si)*8;x++)si<<=1;
    for (x=1;x<sizeof(i)*8;x++)i<<=1;
    
    if (nbr > i){
        printf ("%d pode ser armazenado no tipo 'long int'\n",nbr);
    }else if (nbr > si){
        printf ("%d pode ser armazenado no tipo 'int'\n",nbr);
    }else if (nbr > c){
        printf ("%d pode ser armazenado no tipo 'short int'\n",nbr);
    }else{
        printf ("%d pode ser armazenado no tipo 'char'\n",nbr);
    }


}

int main(int argc, char **argv){
    int inputData=atoi(argv[1]);
	verifyUnsignedTypes(inputData);
	return( 1 );
}


