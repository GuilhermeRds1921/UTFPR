#include <stdio.h>
int main(void)
{
    int pont, e, h, cg;
    printf("Informe sua nota de Exatas: ");
    scanf("%d", &e);
    printf("Informe sua nota de Humanas: ");
    scanf("%d", &h);
    printf("Informe sua nota de Conhecimento Geral: ");
    scanf("%d", &cg);
    pont = ((e * 3) + (h * 2) + cg) / 6;
    if(pont<=250){
        printf("Insuficiente, Nota: %d", pont);
    }
     if(pont>=251&&pont<=500){
        printf("Baixo, Nota: %d", pont);
    }
     if(pont>=501&&pont<=700){
        printf("Regular, Nota: %d", pont);
    }
     if(pont>=701&&pont<=900){
        printf("Bom, Nota: %d", pont);
    }
        if(pont>900){
        printf("Exelente, Nota: %d", pont);
    }
    return 0;
}
