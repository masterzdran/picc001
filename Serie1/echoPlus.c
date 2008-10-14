#include <stdio.h>

/*------------------------------------------------------------------------------
 *Exercicio 2:
 *Faça um programa que escreva o texto lido do standard input, com getchar(),
 *excepto os espaços no final de cada linha e as linhas em branco.
 *------------------------------------------------------------------------------
 */
int main(int argc, char **argv) {
    char c;
    int blankSpace = 0;
    int blankLines = 0;

    while ((c = getchar()) != -1) {
        if ((c == ' ')) {
            if (blankSpace == 0)printf("%c", c);

            blankSpace++;
        } else if (c == '\n') {
            if (blankLines == 0)printf("%c", c);
            blankLines++;
        } else {
            blankSpace = blankLines = 0;
            printf("%c", c);
        }
    }
    return ( 1);
}
