//1) Ler um n�mero e ler um d�gito. Contar quantos d�gitos o n�mero possui.

#include <stdio.h>

int main(void)
{
    int contDigitos, num, digito, aux;
    char opcao;

    do
    {
        do
        {
            printf("Digite um digito: ");
            scanf("%d", &digito);
            if(digito <= 0)
            {
                printf("Numero invalido! O numero deve ser positivo.\n");
            }
        }while(digito <= 0);

        do
        {
            printf("\nDigite um numero: ");
            scanf("%d", &num);

            if(num > 0)
            {
                contDigitos = 0;
                aux = num;

                while(aux != 0)
                {
                    if(aux%10 == digito)
                    {
                        contDigitos++;
                    }
                    aux = aux / 10;
                }
                printf("O numero tem %d digitos iguais a %d \n", contDigitos, digito);
            }
        }while(num > 0);

        printf("\nDeseja repetir o programa (S ou N)? ");
        fflush(stdin);
        scanf("%c",&opcao);

    }while(opcao == 'S' || opcao == 's');

    return 0;
}
