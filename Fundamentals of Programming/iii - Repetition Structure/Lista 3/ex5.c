/*5) Apresentar os números primos entre dois valores, que representam os limites inferior e
superior, respectivamente, de um intervalo, informados pelo usuário. Apresentá-los com n
números por linha. n é informado pelo usuário. Validar n para que seja maior que 0. Validar o limite inferior para seja maior que 1 e o limite superior para que seja maior ou
igual ao limite inferior. Implementar a repetição de programa.*/

#include <stdio.h>
int main(void)
{
    int num1, num2, linha, i, j, contPrimos, contDiv;
    char opcao;

    do
    {
        do
        {
            printf("\nInforme um Limite Inferior: ");
            scanf("%d", &num1);

            if(num1<=1)
            {
                printf("\nInvalido ");
            }
        }
        while(num1<=1);

        do
        {
            printf("Informe o Limire Superior: ");
            scanf("%d", &num2);
            if(num2<num1)
            {
                printf("\nInvalido ");
            }
        }
        while(num2<num1);

        do
        {
            printf("Informe o numero de Linhas: ");
            scanf("%d", &linha);
            if(linha<=0)
            {
                printf("\nInvalido \n");
            }
        }
        while(linha<=0);


        contPrimos=0;
        for(i=num1; i<=num2;i++)
        {
            contDiv=0;
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                {
                    contDiv++;
                }
            }
            if(contDiv==2)
            {
                printf("%d\t", i);
                contPrimos++;
                if(contPrimos%linha==0)
                {
                    printf("\n");
                }
            }
        }



        printf("\nQuer repetir o Programa (S/s): ");
        fflush(stdin);
        scanf("%c", &opcao);

    }
    while(opcao=='S'||opcao=='s');
    return 0;
}

