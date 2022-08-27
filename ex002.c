/*O mundo do alfabeto resolveu iniciar uma competição de popularidade entre seus participantes. 
  Cada letra a partir de agora receberá uma pontuação baseada na sua popularidade, ou seja, 
quantas vezes ela é utilizada no dia a dia, seja em e-mails de trabalho, mensagens no tik tok, 
ou como variáveis em programas C na disciplina de ITP. A pontuação será atribuída como o número 
de vezes que a letra foi usada naquele dia, multiplicado por um valor constante que representa 
o índice de popularidade daquele dia.

Faça um programa que recebe três informações: a letra, a quantidade de vezes que ela apareceu 
e o valor do índice de popularidade, e imprime como resultado a seguinte frase: "A popularidade 
  de $ é de % pontos", onde $ será a letra que foi lida na entrada e % será a pontuação calculada, 
  restrita a uma casa decimal.



DICA: observe bem os exemplos de entrada e saída, e cuidado com a formatação do texto. Verifique 
se você sabe resolver na cabeça e rabiscando no papel antes de ir codificar o seu programa!

DICA 2: verifique como fazer a impressão de ponto flutuante olhando a aula 01 do Notion, no vídeo 
sobre Entrada e Saída.

Exemplo de entrada	Exemplo de saída
A 20 10.5	A popularidade de A é 210.0
Z 0 101.5	A popularidade de Z é 0.0
142*/


#include <stdio.h>

int main(void)
{
    char letra;
    int n1;
    float n2, r;

    scanf("%c %d %f", &letra, &n1, &n2);
    r = n1 * n2;
    printf("A popularidade de %c é %.1f", letra, r);

    return 0;
}
