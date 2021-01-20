#include <stdio.h>
int main(void){
    int i;
    float quant=2, uni, soma=0, val;
    do{
    printf("Informe a quantidade de um produto: ");
    scanf("%f", &quant);
    if(quant == 0){
        break;
    }
    printf("Informe o valor unitario do produto: ");
    scanf("%f", &uni);
    soma = soma + quant * uni;

    }while(quant!=0);
    printf("O valor da compra foi R$%.2f\n\n", soma);

    printf("Informe o valor pago pelo cliente: ");
    scanf("%f", &val);
    soma = val-soma;
    i = soma;
    printf("Troco: R$%.2f\n\n", soma);
    printf("O valor do troco devolvido sera com: \n" );
    printf("%d notas de 10 reais\n", i/10);
    printf("%d notas de 5 reais\n", (i-(i/10)*10)/5);
    printf("%d notas de 1 real\n",(i-(i/10)*10)%5);
    printf("e %.2f centavos",soma-i);
return 0;
}