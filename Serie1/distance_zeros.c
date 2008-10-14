#include <stdio.h>
#include <stdlib.h>
/*------------------------------------------------------------------------------
 *Exercicio 3:
 *Escreva a função distance_zeros(v) que retorna a maior distância entre dois
 *bits a 0 no valor inteiro sem sinal v. A função retorna 0 se o valor v tiver
 *todos os bits a 1 ou só um bit a 0.
 *------------------------------------------------------------------------------
 */
int distance_zeros(unsigned int v) {
    unsigned int nbr = 0, max = 0;
    while (v != 0){
        if ((~v) & 01) {
            if (nbr>max)max = nbr;
            nbr = 0;
        } else {
            nbr++;
        }
         v >>= 1;
    }
    return ( max);
}

/*
int main(int argc, char **argv) {
   unsigned int inputData = atoi(argv[1]);
    return ( distance_zeros(inputData));
}
*/
