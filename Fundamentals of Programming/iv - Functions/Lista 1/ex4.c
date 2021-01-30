#include <stdio.h>
int main(void)
{
    int num1, num2,num3, i;
    char opcao;
    do{
        printf("Informe um Numero: ");
        scanf("%d", &num1);
        printf("Informe outro Numero: ");
        scanf("%d", &num2);
        printf("\nO valor eh: %d", mult(num1, num2));
        printf("\n%d * %d = %d\n ", num1, num2, mult(num1, num2));
        printf("\nInforme um Numero: ");
        scanf("%d",&num3);
        for(i=1;i<=10;i++)
        {
            printf("\n%d * %d = %d", num3, i, mult(num3, i));
        }
        printf("\nDeseja Repetir o Programa?(S ou N)");
        fflush(stdin);
        scanf("%c", &opcao);
    }while(opcao=='s'||opcao=='S');
    return 0;
}
int mult(int num1, int num2)
{
    int mult;
    mult = num1 * num2;
    return(mult);
}
