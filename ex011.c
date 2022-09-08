/*Outra das atribuições da Confederação Brasileira de Atletismo é a organização de 
competições nacionais incluindo detalhes como quando, onde e quais atletas irão competir.

Parte das provas de atletismo são efetuadas numa área especial denominada de pista 
de atletismo que é dividida em 8 raias de modo que cada atleta é alocada uma raia 
individual e assim ele executará toda a prova nessa raia sem atrapalhar os demais. 
Logo, somente 8 atletas podem competir ao mesmo tempo, o que é chamado de série, de 
modo que uma competição pode ter uma ou mais séries.

Você deve desenvolver um programa para determinar quantas séries a prova de 100 metros 
rasos deve ter. Porém, somente os atletas mais rápidos devem ser aptos a competir, isto 
é, somente os atletas que correram os 100 metros em um tempo inferior ou igual ao 
estabelecido para inscrição na competição. Desse modo, a primeira entrada do programa 
será o tempo máximo que o atleta pode ter alcançado para estar apto a competir.

Em seguida, o programa irá receber uma quantidade indeterminada de inscrições até que o 
valor -1.0 seja apresentado. Cada inscrição consiste em um único valor correspondente ao 
tempo em segundos que o atleta correu nos 100 metros registrado até a terceira casa decimal.

O programa deve apresentar como saída a quantidade total de atletas aptos a competir e logo 
em seguida a quantidade de séries necessárias para realização da prova de 100 metros.

Observe o formato da entrada e saída padrão para ver como esses dados serão inseridos no programa.

Exemplo de entrada	                      Exemplo de saída

12.00
11.00
10.50
11.20
-1	                                      3 1


9.00
12.00
10.70
11.12
10.87
11.54
12.00
10.79
10.90
10.67
10.85
10.65
10.97                                      0 0
-1 */

#include <stdio.h>

int main(){
    
    float n1, n2;
    int cont, quant, res;
    
    scanf("%f", &n1);
    scanf("%f", &n2);
    
    cont = quant = res = 0;
    
    do{
        if(n2 <= n1){
            cont = cont + 1;
        }
        scanf("%f", &n2);
    }while(n2 != -1);
    
    if(cont <= 8){
        if(cont > 0){
            quant = 1;
        }
    }
    else if(cont < 16 ){
        if(cont > 8){
            quant = 2;    
        }
    }
    else if(cont > 17){
        quant = 3;
    }
    else{
        quant + 0;
    }
    
    printf("%d %d", cont, quant);
    
    return 0;
}
