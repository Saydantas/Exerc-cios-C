/*Você foi contratado pela Confederação Brasileira de Atletismo para auxiliar 
nos processos administrativos da confederação. Uma das suas primeiras tarefas 
é desenvolver um programa para facilitar o desenvolvimento de orçamentos para 
compra de equipamentos e materiais para as competições.

Mais especificamente, você deve desenvolver um programa que recebe como entrada 
a descrição dos diferentes itens do orçamento de modo que cada item é descrito 
por dois valores: sua quantidade e seu valor unitário. Como os orçamentos possuem 
várias páginas, a quantidade total de itens não é conhecida previamente. Assim, 
o programa receberá uma quantidade indeterminada de itens até que o valor -1 
seja apresentado.

O programa deve apresentar como saída a quantidade total de elementos, uma vez 
que cada item pode apresentar mais de uma unidade, e em seguida o valor total do 
orçamento (considerando duas casas decimais).

Observe o formato da entrada e saída padrão para ver como esses dados serão 
inseridos no programa.

Exemplo de entrada	         Exemplo de saída

2 5
3 5
-1	                         5 25.00

1 0.5
2 0.25
-1	                         3 1.00

*/

#include <stdio.h>

int main(void){
    
    int qtd, total = 0;
    float valor, valor_total = 0.0;
    
    scanf("%d", &qtd);
    
    while(qtd != -1){
        scanf("%f", &valor);
        
        total += qtd;
        valor_total += qtd * valor;
        
        scanf("%d", &qtd);
    }
    
    printf("%d %.2f\n", total, valor_total);
    
    return 0;
}
