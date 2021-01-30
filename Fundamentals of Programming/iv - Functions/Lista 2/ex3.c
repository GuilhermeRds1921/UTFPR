#include <stdio.h>
#include <math.h>
int main(void)
{
    int num, lim1, lim2, i;
    char opcao;
    printf("\n1- Verificar se o numero eh Quadrado perfeito");
    printf("\n2- Mostrar os Quadrados perfeitos que pertencem ao intervalo");
    do
    {
        printf("\n\nEscolha uma Opcao: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("Informe um Numero: ");
            scanf("%d", &i);
            quadrado(i, num);
            break;
        case 2:
            printf("Informe um Limite Inferior: ");
            scanf("%d", &lim1);
            printf("Informe um Limite Superior: ");
            scanf("%d", &lim2);
            for(i = lim1; i <= lim2; i++)
            {
                quadrado(i, num);
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
int quadrado(int num, int op)
{
    int i;
    float sqr;
    sqr = sqrt(num);
    i = sqrt(num);
    if( i == sqr){
        printf("%d eh Quadrado Perfeiro, %.0f e sua Raiz.\n", num, sqr);
    }
    if(op != 2)
    {
        if( i != sqr){
        printf("%d Nao tem Raiz.\n", num);
        }
    }
}
