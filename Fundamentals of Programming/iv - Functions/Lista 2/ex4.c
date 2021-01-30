#include <stdio.h>
int main(void)
{
    int num, lim1, lim2, j, i;
    char opcao;
    printf("\n1- Verificar se o numero eh Palindromo");
    printf("\n2- Mostrar os numeros Palindromos que pertencem ao intervalo");
    do
    {
        printf("\n\nEscolha uma Opcao: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            do
            {
                printf("Informe um Numero de 2 a 9 digitos: ");
                scanf("%d", &i);
                if(i > 10 || i < 999999999)
                    ;
                {
                    Palindromo(i, num);
                }
            }
            while(i < 10 || i > 999999999);

            break;
        case 2:
            printf("Informe um Limite Inferior: ");
            scanf("%d", &lim1);
            printf("Informe um Limite Superior: ");
            scanf("%d", &lim2);
            for(j = lim1; j <= lim2; j++)
            {
                Palindromo(i, num);
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
int Palindromo(char nu[10], int op){

  return 0;
}

