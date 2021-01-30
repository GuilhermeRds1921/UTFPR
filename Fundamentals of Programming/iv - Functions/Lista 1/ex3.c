#include<stdio.h>
float converter(float valor,float cotacao,char tipo);
int main(void)
{
    float valor, cotacao, i;
    int lim1, lim2;
    char opcao, tipo;
    do
    {
        printf("Informe um Valor: ");
        scanf("%f", &valor);
        printf("Informe a Cotacao: ");
        scanf("%f", &cotacao);
        printf("Informe para qual moeda deseja converter(D-dollar ou R-real): ");
        fflush(stdin);
        scanf("%c", &tipo);
        printf("O valor obitido eh: %.2f\n\n", converter(valor, cotacao, tipo));

        printf("Informe um Limite Inferior: ");
        scanf("%d", &lim1);
        printf("Informe um Limite Superior: ");
        scanf("%d", &lim2);
        printf("Informe a Cotacao: ");
        scanf("%f", &cotacao);
        printf("Informe para qual moeda deseja converter(D-dollar ou R-real): ");
        fflush(stdin);
        scanf("%c", &tipo);
        printf("Dollar\t Reais\n");

        for(i = lim1; i <= lim2; i++){
            printf("%.0f\t", i);
            printf("%.2f\n", converter(i, cotacao, tipo));
        }
        printf("\nDeseja Repteir O Pograma?(S ou N): ");
        fflush(stdin);
        scanf("%c", &opcao);
    }
    while(opcao == 's'||opcao == 'S');
    return 0;
}

float converter(float valor, float cotacao, char tipo)
{
    float i, conv;
    if(tipo == 'R' || tipo == 'r')
    {
        conv = valor * cotacao;
    }
    else
    {
        conv = valor / cotacao;
    }
    return conv;
}
