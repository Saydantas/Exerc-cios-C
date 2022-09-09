/*Palíndromo é uma palavra, frase ou número que permanece 
igual quando lida de trás para diante. Por extensão, palíndromo 
é qualquer série de elementos com simetria linear, ou seja, que 
apresenta a mesma sequência de unidades nos dois sentidos. 
Escreva um programa em C para verificar se um número é palíndromo 
ou não. 

Após a verificação veja se é par ou impar


Exemplo: 4224 é palíndromo e par.

         32123 é palíndromo e impar. 
         
         

Exemplo de entrada	                      Exemplo de saída

151	                                      151 é Palíndromo e impar.
12321	                                    12321 é Palíndromo e impar.
*/

#include <stdio.h>

int main(void){
    
    int n1, n2, ni = 0;
    
    scanf("%d", &n1);
    
    n2 = n1;
    
    do{
        ni = ni * 10 + n1 % 10;
        n1 /= 10;
        
    }while(n1 > 0);
    
    if(n2 == ni)
        printf("%d é Palíndromo", n2);
    else
        printf("%d não é Palíndromo", n2);
    
    if(n2 % 2 == 0)
        printf(" e par.\n");
    else
        printf(" e impar.\n");
    
    
    return 0;
}
