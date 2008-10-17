#include <stdio.h>
#include <stdlib.h>
#include "Serie1.h"

/*------------------------------------------------------------------------------
 *Exercicio 4:
 *Usando a função anterior, faça um programa que pede ao utilizador para inserir
 *valores e diz para cada um deles, qual a maior distancia entre dois bits a 0.
 *O programa termina quando for introduzido o valor zero.
 *------------------------------------------------------------------------------
 */
int main(int argc, char **argv) {
    int n;
    while (n != 0){
        printf ("Introduza o numero que pretende verificar: \n");
        scanf("%d", &n);
        printf (">>>> %d\n",distance_zeros(n));
    }
    return ( 1);
}
