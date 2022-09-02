/*Uma brincadeira muito popular entre crianças velhas é a adedonha: as crianças colocam valores 
numéricos com os dedos para escolher uma das letras do alfabeto, e então precisam responder palavras 
de uma categoria de informações escolhidas que começam com aquela letra.

Por exemplo, se a categoria for Personagens de Naruto e a soma dos dedos colocados for 11, então 
dará a letra K, e o pessoal vai começar a responder Kaguya, Kakashi, etc...

Para ajudar os vários pais cansados de jogar adedonha, vocês vão fazer um programa que facilita 
pelo menos um dos trabalhos dos jogadores: a contagem de dedos para saber qual é a letra.

O seu programa receberá 4 valores inteiros, correspondendo a quantidade de dedos que foram colocados 
por cada um de quatro jogadores (sempre serão 4). O valor desses dedos pode ser de 0 (não colocou nenhum) 
até 10. Seu programa então deve imprimir uma mensagem no seguinte formato:

- "Ei! Ninguém colocou nada!" - caso o total de dedos colocado seja 0.

- "Letra: @" - onde @ é a letra a ser impressa (A, B, C, D....Z, sempre maiúscula). Essa impressão 
ocorre quando o total de dedos colocados for maior que zero.

Atente para os casos de teste para ver a formatação da entrada e saída do programa!


Exemplo de entrada	     Exemplo de saída
1 1 1 1	                 Letra: D
1 2 3 4	                 Letra: J*/

#include<stdio.h>

int main(){
    
    int n1, n2, n3, n4, soma;
    
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    soma = n1 + n2 + n3 + n4;
    
    if(soma == 0){
        printf("Ei! Ninguém colocou nada!\n");
        return 0;
    }
        switch(soma%26){
            case 1: printf("Letra: A\n"); break;
            case 2: printf("Letra: B\n"); break;
            case 3: printf("Letra: C\n"); break;
            case 4: printf("Letra: D\n"); break;
            case 5: printf("Letra: E\n"); break;
            case 6: printf("Letra: F\n"); break;
            case 7: printf("Letra: G\n"); break;
            case 8: printf("Letra: H\n"); break;
            case 9: printf("Letra: I\n"); break;
            case 10: printf("Letra: J\n"); break;
            case 11: printf("Letra: K\n"); break;
            case 12: printf("Letra: L\n"); break;
            case 13: printf("Letra: M\n"); break;
            case 14: printf("Letra: N\n"); break;
            case 15: printf("Letra: O\n"); break;
            case 16: printf("Letra: P\n"); break;
            case 17: printf("Letra: Q\n"); break;
            case 18: printf("Letra: R\n"); break;
            case 19: printf("Letra: S\n"); break;
            case 20: printf("Letra: T\n"); break;
            case 21: printf("Letra: U\n"); break;
            case 22: printf("Letra: V\n"); break;
            case 23: printf("Letra: W\n"); break;
            case 24: printf("Letra: X\n"); break;
            case 25: printf("Letra: Y\n"); break;
            case 0: printf("Letra: Z\n"); break;
    }
    return 0;
}
