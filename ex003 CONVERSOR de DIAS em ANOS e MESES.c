/*O supermercado Inteiramente e Totalmente Pão-duro (ITP) estava com um grande problema na venda de seus produtos, 
porque muitos haviam expirado o prazo de validade. Ao invés de tomar vergonha na cara  resolver o problema, a administração 
bolou um plano para "mascarar" os prazos de validade: em vez de informar a data em que o produto vai expirar, eles colocam 
a quantidade de dias até o produto expirar. Dessa forma, apenas quem estiver com a matemática afiada, vai conseguir saber 
se o produto está perto de estragar ou não.

Mas como você está com a matemática e a programação em dia, você resolveu fazer um programa para ajudar os clientes do 
supermercado! O seu programa vai ler um valor numérico inteiro, que representa uma quantidade de dias, e vai dar como 
resposta o quanto essa quantidade valeria em anos, meses e dias. Para facilitar suas contas, considere que todo ano tem 
365 dias, e todo mês tem 30 dias.



DICA: observe bem os exemplos de entrada e saída, e veja se você consegue resolver no papel antes de ir pro código :)

Exemplo de entrada	Exemplo de saída

15	0 ano(s)
    0 mes(es)
    15 dia(s)
    
30	0 ano(s)
    1 mes(es)
    0 dia(s)*/

#include <stdio.h>

int main ()
{
int a,m,d,n1;
scanf ("%d", & n1);
a=n1/365;
m=(n1 % 365)/ 30;
d=(n1 % 365)% 30;
printf ("%d ano(s)\n%d mes(es)\n%d dia(s) ", a,m,d);
return 0;
}
