#include <stdio.h>
#include <stdlib.h>
/*------------------------------------------------------------------------------
 *Exercicio 3:
 *Escreva a fun��o distance_zeros(v) que retorna a maior dist�ncia entre dois
 *bits a 0 no valor inteiro sem sinal v. A fun��o retorna 0 se o valor v tiver
 *todos os bits a 1 ou s� um bit a 0.
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
