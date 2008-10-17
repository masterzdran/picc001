#include <stdio.h>

/*------------------------------------------------------------------------------
 *Exercicio 2:
 *Fa�a um programa que escreva o texto lido do standard input, com getchar(),
 *excepto os espa�os no final de cada linha e as linhas em branco.
 *------------------------------------------------------------------------------
 */
int main(int argc, char **argv) {
    char c;
    int blankSpace = 0;
    int blankLines = 0;

    while ((c = getchar()) != -1) {
        switch (c){
          case ' ':
          case '\t':
              if (blankSpace == 0)printf(" ");
              blankSpace++;
              break;
          case '\n':
              if (blankLines == 0 )printf("%c", c);
              blankLines++;
              blankSpace++;
              break;
          default:
            blankSpace = blankLines = 0;
            printf("%c", c);
        }
    }
    return ( 1);
}
