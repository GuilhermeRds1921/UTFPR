/*5) Ler n�meros inteiros. Prosseguir a leitura at� ser informado o valor zero que n�o deve ser considerados nos c�lculos. Informar:
a) Quantos valores positivos foram informados;
b) Quantos valores negativos e pares foram informados;
c) A m�dia dos valores divis�veis por 3 informados. Usar a func�o abs() para converter os valores negativos em positivos. Validar para
n�o fazer divis�o por zero no c�lculo da m�dia. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num=1, contPositivo=0, contNegativoPar=0, cont=0, soma=0;
    float media;

    while(num != 0)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num != 0)
        {
            if(num > 0)
            {
                contPositivo++;
            }
            else if(num < 0 && num%2 == 0)
            {
                contNegativoPar++;
            }
            if(num%3 == 0)
            {
                cont++;
                num = abs(num); //converte os valores negativos em positivos
                soma = soma + num;
            }
        }
    }

    printf("\nNumeros positivos: %d\n", contPositivo);
    printf("\nNumeros negativos que sao pares: %d\n", contNegativoPar);

    if(cont > 0)
    {
        media = (float)soma / cont;
        printf("\nA media dos numeros divisiveis por 3 eh: %.1f\n", media);
    }

    return 0;
}
