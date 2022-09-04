/*Escreva um programa que receba um número inteiro de 1 à 100000 e separe os 
dígitos do número, imprimindo na saída os dígitos em linhas diferentes. 

Exemplo de entrada	           Exemplo de saída

12349	                         1
                               2
                               3
                               4
                               9

223	                           2
                               2
                               3
*/

#include <stdio.h>

int main(){
    
    int n1;
    
    scanf("%d", &n1);
    
    if(n1 / 10000 > 0){
        printf("%d\n", n1 / 10000);
    }
    if(n1 / 1000 % 10 != 0){
        printf("%d\n", (n1 / 1000) % 10);
    }
    printf("%d\n", ((n1 / 100) % 100) % 10);
    printf("%d\n", (n1 / 10) % 10);
    printf("%d", ((((n1 % 10000) % 1000) % 100) % 10) );
    
    
    return 0;
}
