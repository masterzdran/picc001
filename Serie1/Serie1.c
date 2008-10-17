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
/*------------------------------------------------------------------------------
 *Exercicio 5:
 *Escreva a função reset_bits(v,p,n) que retorna o valor inteiro v depois de
 *colocar a zero os n bits a partir da posição p. A posição 0 é o bit de menor
 *peso do inteiro.
 *------------------------------------------------------------------------------
 */
int pow2 (int i){
    int j=1;
    j<<=i;
    return j;
    }

int reset_bits (unsigned int v,unsigned int p, unsigned int n){
    unsigned int tmp=0;
    while (n>0){
        tmp+=pow2(p+n);
        n--;
    }
    tmp=~tmp;
    return v&tmp;
}
/*------------------------------------------------------------------------------
 *Exercicio 6
 *Escreva a função reverse(s) que inverte a ordem dos caracteres na string s.
 *------------------------------------------------------------------------------
 */
void reverse (char s[], int len){
    int j=0;
    int whiteSpace=0;
    char *tmp;
    char c;
    while (len>0){
        --len;
        switch (c=s[len]){
          case ' ':
          case '\n':
              whiteSpace=0;
              break;
         default:          
              if(whiteSpace == 0){
                whiteSpace+=1;
                if ((c <=122 ) && (c >= 97 )){
                  c=c - 32;
                }
              }else{
                if ((c <= 90 ) && (c >= 65 )){
                  c=c + 32;
                }else{
                  c=c;
                }
              }
        }   
        *(tmp+j)=c;
        printf ("%c",tmp[j]);
        j++;
    }
}

