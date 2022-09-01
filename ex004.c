/*Escreva um programa em que o usuário entre com dois números, A e B, ambos maiores ou iguais a 0. Após isso o programa deverá imprimir:

A soma dos dois números se ambos forem pares
A mensagem "Não posso somar, pois <A> não é par", onde <A> deve ser substituido pelo valor de A
A mensagem "Não posso somar, pois <B> não é par", onde <B> deve ser substituido pelo valor de B
Caso ambos os números não sejam pares, o programa deve imprimir as duas mensagens.

Exemplo de entrada	  Exemplo de saída

0
2	                    2

0
1	                    Não posso somar, pois 1 não é par*/

#include<stdio.h>

int main(){
    
    int a, b, s;
    scanf("%d", &a);
    scanf("%d", &b);
    s = a + b;
    
    if(a % 2 != 0 && b % 2 != 0){
        printf("Não posso somar, pois %d não é par\n", a);
        printf("Não posso somar, pois %d não é par", b);
    }
    
    else if(a % 2 != 0){
        
        printf("Não posso somar, pois %d não é par", a);
    }
    
    else if(b % 2 != 0){
        
        printf("Não posso somar, pois %d não é par", b);
    }
    
    else if(a % 2 == 0 && b % 2 == 0){ 
        printf("%d", s);
        
    }
    return 0;
}
