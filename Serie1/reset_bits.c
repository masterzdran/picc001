/* 
 * File:   reset_bits.c
 * Author: nac
 *
 * Created on 14 de Outubro de 2008, 10:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*------------------------------------------------------------------------------
 *Exercicio 5:
 *Escreva a função reset_bits(v,p,n) que retorna o valor inteiro v depois de
 *colocar a zero os n bits a partir da posição p. A posição 0 é o bit de menor
 *peso do inteiro.
 *------------------------------------------------------------------------------
 */

int reset_bits (unsigned int v,unsigned int p, unsigned int n){
    unsigned int tmp=0;
    while (n>0){
        tmp+=pow(2.0,p+n);
        n--;
    }
    tmp=~tmp;
    return v&tmp;
}
int main(int argc, char** argv) {
    printf ("%d >>>>\n>",reset_bits(313,2,3));
    return (EXIT_SUCCESS);
}

