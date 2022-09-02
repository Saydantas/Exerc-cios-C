/*Muitas vezes na computação, precisamos de algoritmos para resolver problemas envolvendo representações 
geométricas, seja nos jogos, mapas ou outras aplicações que utilizam essas formas. Um dos problemas mais 
comuns é saber se um ponto ou não está dentro ou fora de um polígono. Dependendo do cenário, isso pode 
ficar mais complexo.

Nesse problema, vocês vão apenas verificar se um ponto está dentro de um retângulo ou não. Seu programa 
lerá dois pares de valores inteiros representando a coordenada de dois pontos em um retângulo: o valor do 
canto esquerdo superior e o valor do canto direito inferior. Em seguida ele lerá dois inteiros representando 
a coordenada de um ponto qualquer. Seu programa deve imprimir se esse ponto está dentro ou fora da área 
delimitada pelo retângulo.

Observe bem os casos de entrada e saída para verificar a formatação dos dados e da impressão.

Exemplo de entrada	         Exemplo de saída

1 1 5 5
3 4	                         Dentro!

1 1 5 5
1 6	                         Fora!
*/

#include <stdio.h>

int main(void){
    
    int x1, y1, x2, y2;
    int targetx, targety;
    
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &targetx, &targety);
    
    if(targetx >= x1 && targetx <= x2 && targety >= y1 && targety <= y2)
        printf("Dentro!\n");
    else
        printf("Fora!\n");
        
    return 0;
}
