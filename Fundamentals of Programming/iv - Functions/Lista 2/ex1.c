#include <stdio.h>
int main(void)
{
    int num, lim1, lim2, i;
    char opcao;
    printf("\n1- Verificar se o numero eh triangular");
    printf("\n2- Mostrar os numeros triangulares que pertencem ao intervalo");
    do
    {
        printf("\n\nEscolha uma Opcao: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("Informe um Numero: ");
            scanf("%d", &i);
            triangular(i, num);
            break;
        case 2:
            printf("Informe um Limite Inferior: ");
            scanf("%d", &lim1);
            printf("Informe um Limite Superior: ");
            scanf("%d", &lim2);
            for(i = lim1; i <= lim2; i++)
            {
                triangular(i, num);
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
int triangular(int num, int op)
{
    int i, c = 0;
    for(i = 1; i <= num; i++)
    {
        if(i*(i+1)*(i+2)== num)
        {
            printf("%d eh Triangular\n", num);
            printf(" ==> %d * %d * %d = %d\n", i, i+1, i+2, num);
            c++;
        }
    }
    if(op != 2)
    {
        if(c == 0)
        {
            printf("%d Nao eh Triangular\n", num);
        }
    }
}
