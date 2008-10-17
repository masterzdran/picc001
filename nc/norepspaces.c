/* 
 * File:   norepspaces.c
 * Author: nac
 *
 * Created on 14 de Outubro de 2008, 11:55
 */

#include <stdio.h>
#include <stdlib.h>
/*------------------------------------------------------------------------------
 *Exercicio 7:
 *Escreva a função norepspaces(s) que substitui um ou mais espaços seguidos por
 *um único espaço na string s.
 *------------------------------------------------------------------------------
 */

void norepspaces(char s[]) {
}

int main(int argc, char** argv) {
    char s[]= "FDSDFSDA             asdfsadfs          asdfsadfsd";
    int i;
    int spcF = 0;
    for (i = 0; i < sizeof(s)/sizeof(s[0]); i++) {
        if (s[i] == ' ' ) {
            if (spcF == 0){printf("%c", s[i]);}
            spcF++;
        } else {
            spcF = 0;
            printf("%c", s[i]);
        }
    }
    return (EXIT_SUCCESS);
}

