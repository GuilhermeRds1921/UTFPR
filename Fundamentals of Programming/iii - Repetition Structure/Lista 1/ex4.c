/*4) Elabore um programa que permita ao usuário fornecer 30 números quaisquer e apresente:
a) A soma dos10 primeirosnúmeros.
b) A soma do 11º número até o 20º número.
c) A soma do 21º número até o 30º número. d) A soma de todosos números.
*/
#include <stdio.h>
int main(void)
{
    int i=1, c, som1=0, som2=0, som3=0, somt=0;

    while(i<=30)
    {
        printf("\nInforme um Numero: ");
        scanf("%d", &c);
        if(i>=1&& i<=10)
        {
            som1=som1+c;
        }
        else if(i>=10&& i<=20)
        {
            som2 =som2+c;
        }
        else
        {
            som3=som3+c;
        }
        somt= som1+som2+som3;
        i++;
    }
    printf("\nA soma dos 10 primeiros e: %d", som1);
    printf("\nA soma dos 11 ao 20 e: %d", som2);
    printf("\nA soma dos 21 ao 30 e: %d", som3);
    printf("\nA soma de todos e: %d", somt);
}
