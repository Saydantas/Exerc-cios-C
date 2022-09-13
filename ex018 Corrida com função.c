/*Para entrar em forma para o próximo verão, você e seu amigo 
decidiram correr todas as manhãs na rua da universidade. 
Geralmente vocês correm juntos, mas, na corrida de hoje, seu 
amigo começou a correr um pouco mais cedo e, por isso, está um 
pouco mais à frente de você. Neste momento, seu amigo está a X 
metros de distância de você. Você está correndo a uma velocidade 
constante de V1 metros por segundo, e seu amigo está correndo a 
uma velocidade constante de V2 metros por segundo. Sua tarefa é 
determinar se você irá alcançar seu amigo, e, em caso positivo, 
em quantos segundos isto irá acontecer. O programa deve receber 
X, V1 e V2, respectivamente. Caso seja impossível alcançar seu 
amigo, retorne a mensagem “impossivel”. Utilize funções na sua 
solução.

Exemplo de entrada	              Exemplo de saída

1
2
1
                                  1s
2
3
4
                                  impossivel
*/

#include <stdio.h>

int main(){
    
    int x, v1, v2;
    
    scanf("%d %d %d", &x, &v1, &v2);
    
    
    if(v1 <= v2){
        printf("impossivel");
    }
    else if(v1 > v2){
        printf("%ds", (v1 - v2) * x);
    }
    
    
    return 0;
}
