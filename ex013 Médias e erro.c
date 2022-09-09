/*As médias são utilizadas quando temos um conjunto de dados e queremos 
estimar um valor que represente esses dados. A média pode ser entendida 
como um valor central de determinados dados. Entre com 10 números e calcule 
as média aritmética, geométrica e harmônica, no link temos as formulas 
matemáticas necessárias para o calculo, nesse link pode ser visto o uso 
de uma função necessária para calcular as médias. Ao final calcule e 
imprima o erro médio (entre as médias geométricas e harmônicas) em relação 
a média aritmética.

Para o calculo dos erros use as funções abaixo:

Erro_harmônica= (média harmônica - média aritmética) / média aritmética

Erro_geométrica= (média geométrica- média aritmética) / média aritmética

Erro_médio= (Erro_harmônica + Erro_geométrica)/2



Exemplo de entrada	                                Exemplo de saída



1                                                   Média aritmética é 5.50
2                                                   Média harmônica é 3.41
3                                                   Média geométrica é 4.53
4                                                   Erro médio é -27.79 %
5
6
7
8
9
10	


4                                                   Média aritmética é 13.70
3                                                   Média harmônica é 5.75
2                                                   Média geométrica é 8.47
6                                                   Erro médio é -48.11 %
7
8
9  
23
54
21
*/


#include <stdio.h>
#include <math.h>

int main(void){
    
    float n1, ma, mg, meh;
    
    ma = meh = 0;
    mg = 1;
    
    for(int i = 0; i < 10; i++){
        scanf("%f", & n1);
        
        ma += n1;
        mg *= n1;
        meh += 1 / n1;
    }
    
    ma /= 10;
    meh = 10 / meh;
    mg = pow(mg, 1.0 / 10.0);
    
    printf("Média aritmética é %.2f\n", ma);
    printf("Média harmônica é %.2f\n", meh);
    printf("Média geométrica é %.2f\n", mg);
    
    float erroh = (meh - ma) / ma;
    float errog = (mg - ma) / ma;
    
    printf("Erro médio é %.2f %%\n", (erroh + errog) / 2 * 100);
    
    return 0;
}
