#include <stdio.h>
int main(void)
{
    int num, lim, lim2, i;
    char s;
    do{
    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("O quadrado eh: %d\n", quadrado(num));
    do{
    printf("\nInforme um Limite: ");
    scanf("%d", &lim);
    printf("Informe outro Limite: ");
    scanf("%d", &lim2);
    if(lim<0 || lim>101 || lim2<0 || lim2>101)
    {
        printf("\nValores Invalido de 1 a 100\n");
    }
    }while(lim<0 || lim>101 || lim2<0 || lim2>101);

            if(lim<lim2){
    for(i=lim;i<=lim2;i++)
    {
        printf("\n %d", i);
        printf(" ^ 2 ");
        printf("%d", quadrado(i));
    }
            }
            if(lim2<lim) {
    for(i=lim2;i<=lim;i++)
    {
        printf("\n%d ^2 %d", i, quadrado(i));
    }
            }

     printf("\nDeseja repetir o Codigo? (s ou n)");
     fflush(stdin);
     scanf("%c", &s);
    }while(s=='s' || s=='S');
}

int quadrado(int num)
{
int q;
q=num*num;
return(q);
}
