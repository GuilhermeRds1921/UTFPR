#include <stdio.h>
float poleg(float num);

float main(void)
{
    int i;
    float num;
    char s;
    do
    {
        printf("Informe um numero: ");
        scanf("%f", &num);
        printf("Isso vale %.2f polegadas. \n\n", poleg(num));
        printf("\t== Tabela de Conversao ==\n");

        printf("\tCentimetros\tPolegadas\n");
        for(i=1;i<=20;i++)
        {
            printf("\n\t\t%d\t %.2f ", i, poleg((float)i));
        }
        printf("\nDeseja repetir o Codigo? (s ou n)");
        fflush(stdin);
        scanf("%c", &s);
    }
    while(s == 's'||s == 'S');
}

float poleg(float x)
{
    float pole=0.39, conv;
    conv= pole*x;
    return(conv);
}
