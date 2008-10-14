/* 
 * File:   norepspaces.c
 * Author: nac
 *
 * Created on 14 de Outubro de 2008, 11:55
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*------------------------------------------------------------------------------
 *Exercicio 7:
 *Escreva a função norepspaces(s) que substitui um ou mais espaços seguidos por
 *um único espaço na string s.
 *------------------------------------------------------------------------------
 */

void norepspaces(char s[]) {
    int i;
    int spcF = 0;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ' ' ) {
            if (spcF == 0){printf("%c", s[i]);}
            spcF++;
        } else {
            spcF = 0;
            printf("%c", s[i]);
        }
    }
}

int main(int argc, char** argv) {
    norepspaces("FDSDFSDA             asdfsadfs          asdfsadfsd");
    return (EXIT_SUCCESS);
}

