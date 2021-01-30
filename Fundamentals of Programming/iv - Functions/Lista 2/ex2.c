#include <stdio.h>
int main(void)
{
    int num, lim1, lim2, i;
    char opcao;
    printf("\n1- Verificar se o numero eh retangular");
    printf("\n2- Mostrar os numeros retangulares que pertencem ao intervalo");
    do
    {
        printf("\n\nEscolha uma Opcao: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("Informe um Numero: ");
            scanf("%d", &i);
            retangular(i, num);
            break;
        case 2:
            printf("Informe um Limite Inferior: ");
            scanf("%d", &lim1);
            printf("Informe um Limite Superior: ");
            scanf("%d", &lim2);
            for(i = lim1; i <= lim2; i++)
            {
                retangular(i, num);
            }
            break;
        default:
            printf("\nOpcao Invalida.");
        }

        printf("\n\nDeseja Repetir o Programa?(S ou N)");
        fflush(stdin);
        scanf("%c", &opcao);
    }
    while(opcao=='s'||opcao=='S');
    return 0;
}
int retangular(int num, int op)
{
    int i, j, sum = 0;
    for(i = 2; i <= num; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
        if(sum == num)
        {
            printf("\n%d Eh retangular \n", sum);
            for(j = 2; j <= i; j++)
            {
                if(j%2==0)
                {
                    printf("%d ", j);
                    if(j == i )
                    {
                        printf(" = %d", num);
                    }
                    else
                    {
                        printf("+ ");
                    }
                }
            }
            break;
        }
    }
    if(op !=2)
    {
        if(sum != num)
        {
            printf("%d Nao Eh retangular ", num);
        }
    }
}
