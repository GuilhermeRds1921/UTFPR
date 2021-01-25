#include <stdio.h>
int main(void)
{
    float salm, bruto,salq, inss;
    printf("Informe o Salario Minimo: ");
    scanf("%f", &salm);
    printf("Informe o Salario Bruto: ");
    scanf("%f", &bruto);
    if(bruto<=3*salm){
        inss = bruto*0.08;
        salq = bruto-inss;
        printf("O salario liquido e: %.2f", salq);
    }
    else{
        inss = bruto*0.1;
        salq = bruto - inss;
        printf("O salario liquido e: %.f2", salq);
    }

     return 0;
    }








