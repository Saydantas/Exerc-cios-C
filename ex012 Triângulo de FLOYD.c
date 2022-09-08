/*O triângulo de Floyd é uma série de números que são espalhados 
sequencialmente por uma série de linhas, onde em cada linha temos 
a a quantidade de números correspondente a linha, por exemplo linha 
5, teremos 5 números, na linha 1 apenas 1, na linha 30 teremos 30 
números, números estes de acordo com a sequencia. Escreva um programa 
que dado um número inteiro imprima o Triângulo de Floyd. 

Exemplo: 

Com o número 10 a saída espera é:

1

2 3 

4 5 6 

7 8 9 10 

11 12 13 14 15

16 17 18 19 20 21

22 23 24 25 26 27 28 

29 30 31 32 33 34 35 36 

37 38 39 40 41 42 43 44 45 

46 47 48 49 50 51 52 53 54 55



Exemplo de entrada	                Exemplo de saída
10	                                 1 
                                     2  3 
                                     4  5  6 
                                     7  8  9 10 
                                    11 12 13 14 15 
                                    16 17 18 19 20 21 
                                    22 23 24 25 26 27 28 
                                    29 30 31 32 33 34 35 36 
                                    37 38 39 40 41 42 43 44 45 
                                    46 47 48 49 50 51 52 53 54 55 
                                   
0	                                  Você entrou com 0, tente de novo na próxima*/

#include <stdio.h>

int main(void) { 
  
    int n1;
    int m, k, i, j;

    scanf("%d",&n1);

    m = n1*(n1+1) / 2; 

    for(k = 0; m; k++) m /= 10;

    m = 1;
    for(i = 1; i <= n1; i++) {
      for(j = 0; j < i; j++) printf("%*d ", k, j + m);
      printf("\n");
      m += i;
    }
    if(n1 <= 0){
        printf("Você entrou com %d, tente de novo na próxima", n1);
    }
    return 0;
}
