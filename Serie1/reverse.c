/* 
 * File:   reverse.c
 * Author: nac
 *
 * Created on 14 de Outubro de 2008, 10:56
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*------------------------------------------------------------------------------
 *Exercicio 6
 *Escreva a função reverse(s) que inverte a ordem dos caracteres na string s.
 *------------------------------------------------------------------------------
 */
void reverse(char s[]){
    printf ("tamanho %d\n",strlen (s));
    int i=strlen (s);
    int j=0;
    char tmp[i];
    while (i>0){
        i-=1;
        tmp[j]=s[i];
        printf ("[>> %c <<] ",tmp[j++]);
    }
}
int main(int argc, char** argv) {
    reverse("hello WORLD");
    return (EXIT_SUCCESS);
}

