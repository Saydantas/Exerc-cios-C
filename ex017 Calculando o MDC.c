/*Considere o método a seguir para calcular o Máximo Divisor Comum de dois 
números x e y: - Se y=0, MDC(x,y) = x. - Caso contrário, calcule o MDC de y 
e o resto da divisão x % y. Implemente uma função para calcular o MDC como 
descrito acima.

Exemplo de entrada	                  Exemplo de saída

10
2	                                    MDC(10 , 2) = 2

13
17	                                   MDC(13 , 17) = 1
*/

#include <stdio.h>

int main(void){
    
  int a, b, p, limite, primo = 2, mdc = 1;
 
    scanf("%d", &a);
    scanf("%d", &b);
    
    int n1 = a, n2 = b;
    
    while(n1 != 1 && n2 != 1){
        if (n1 % primo == 0)
        {
            n1 = n1 / primo;
            if(n2 % primo == 0)
            {
                n2 = n2 / primo;
                mdc = mdc * primo;
            }
        }
        else
            if(n2 % primo == 0) n2 = n2 / primo;
            else        
                if(primo == 2) primo = 3;
                else
                    do
                    {
                        primo = primo + 2;
                        n2 = 1;
                        limite = primo / 2;
                        do
                        {
                            n2 = n2 + 2;
                        }
                        while (primo % n2 != 0 && n2 < limite);
                    }
                    while (primo % n2 == 0);
    }
    printf("MDC(%d , %d) = %d\n", a, b, mdc);
    return 0;
}
