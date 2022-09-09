/*Uma das atribuições da Confederação Brasileira de Atletismo 
consiste em atribuir a índice (marca mínima) que os atletas devem 
atingir numa prova para que possam participar em competições 
importantes.

Você deve desenvolver um programa para determinar o índice da 
prova de salto em distância calculado como a média das melhores 
marcas dos últimos N anos. Observe que por diversas razões, a 
competição pode não ter sido realizada em um ou mais anos, nesse 
caso, esses anos não devem ser incluídos no cálculo da média. Por 
exemplo, não foram realizadas competições no ano de 2020 devido à 
pandemia do COVID-19. Além disso, podem ser criadas novas competições 
de modo que não existem dados históricos para determinar o índice.

O programa deve receber como entrada o valor N indicando a quantidade 
de anos a ser considerado para o cálculo da média. Em seguida, o 
programa deve receber N valores correspondentes a distância em metros 
da marca vencedora de cada ano. Os anos sem registro são indicados 
pelo valor -1, pois distâncias não podem assumir valores negativos, e 
não devem ser considerados no cálculo da média. Por exemplo, se forem 
considerados os dados dos três últimos anos como <7, -1, 7>, então a 
média será calculada considerando somente os dois valores, isto é, (7+7)/2.

O programa deve apresentar como resultado o índice da competição considerando 
duas casas decimais. Caso a competição não possua dados históricos, deve 
ser exibida a seguinte mensagem: "A competicao nao possui dados historicos!".

Observe o formato da entrada e saída padrão para ver como esses dados serão 
inseridos no programa.

Exemplo de entrada	                                Exemplo de saída

1
7.25	                                              7.25


3
7
-1
7	                                                  7.00

*/

#include <stdio.h>

int main(void){
    
    int anos, validos = 0;
    double marca, media = 0.0;
    
    scanf("%d", &anos);
    
    for(int i = 0; i < anos; i++){
        scanf("%lf", &marca);
        
        if(marca != -1.0){
            validos++;
            media += marca;
        }
        
    }
    
    if(validos == 0)
        printf("A competicao nao possui dados historicos!\n");
    else
        printf("%.2f\n", media / validos);
    
    return 0;
}
