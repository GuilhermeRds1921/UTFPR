/*4) Elabore um programa que permita ao usu�rio fornecer 30 n�meros quaisquer e apresente:
a) A soma dos10 primeirosn�meros.
b) A soma do 11� n�mero at� o 20� n�mero.
c) A soma do 21� n�mero at� o 30� n�mero. d) A soma de todosos n�meros.
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
