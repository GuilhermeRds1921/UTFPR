/*2) Uma empresa deseja calcular a depreciação de seus bens. Para tanto, desenvolver um
programa que obtenha a taxa de depreciação anual para os bens, o valor do bem a ser
depreciado e o período em anos*/

#include <stdio.h>
int main(void)
{
    float i=1, valor, deprec, valordep, ano, soma;

    printf("Informe o Vaor do Bem: ");
    scanf("%f", &valor);
    printf("Informe o periodo da depreciacao<em Anos>: ");
    scanf("%f", &ano);

    printf("\nAno    Valor do Bem    Depreciacao    Valor Depreciado    ");
    do
    {
        deprec = valor *0.015;
        valordep = valor - deprec;
        printf("\n%.0f         %.2f             %.2f               %.2f", i, valor, deprec, valordep);
        i++;
        valor=valor-deprec;
        soma=soma +deprec;
    }while(i<=ano);

    printf("\n\nDepreciacao acumulada: %.2f", soma );

}
