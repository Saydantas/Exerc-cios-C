/*Escreva um programa em que o usuário informe a temperatura (em números reais) e a escala utilizada (Celsius, Farenheit ou Kelvin). 

A saída do programa será a temperatura nas 3 escalas, com duas casas decimais de precisão.

Considere que as escalas serão informadas como uma única letra:

C = Temperatura em graus Celsius (°C)

F = Temperatura em graus Farenheit (°F)

K - Temperatura em graus Kelvin (K)



A conversão entre as escalas pode ser feita com as seguintes equações:

K = C + 273.15

F = C * 1.8 + 32

Exemplo de entrada	     Exemplo de saída
40 C
                         Celsius: 40.00
                         Farenheit: 104.00
                         Kelvin: 313.15
72 F
                         Celsius: 22.22
                         Farenheit: 72.00
                         Kelvin: 295.37
*/

#include <stdio.h>

int main (){
    
    float n1;
    char g;
    
    
    scanf("%f %s", &n1, &g);
    
    
    if(g == 'C'){
        printf("Celsius: %.2f\n", n1);
        printf("Farenheit: %.2f\n", ((n1 *9) / 5) + 32);
        printf("Kelvin: %.2f", n1 + 273.15);
    }
    else if(g == 'F'){
        printf("Celsius: %.2f\n", (n1 - 32) * 5 / 9);
        printf("Farenheit: %.2f\n", n1);
        printf("Kelvin: %.2f", (n1 - 32) * 5 / 9 + 273.15);
        
    }
    else if(g == 'K'){
        printf("Celsius: %.2f\n", n1 - 273.15);
        printf("Farenheit: %.2f\n", (n1 - 273.15) * 9 / 5 + 32);
        printf("Kelvin: %.2f", n1);
    }
    return 0;
}
