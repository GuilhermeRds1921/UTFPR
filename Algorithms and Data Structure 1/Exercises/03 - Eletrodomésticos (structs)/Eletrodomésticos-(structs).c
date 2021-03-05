#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct aparelhos{
    char nome[15];
    int potencia;
    float horas;
};
int main() {

    int num, i, dias, total = 0;

    scanf("%d", &num);
    struct aparelhos apr[num];
    float cada[num];

    for(i = 0; i < num; i++){
        scanf("%s", &apr[i].nome);
        scanf("%d", &apr[i].potencia);
        scanf("%f", &apr[i].horas);
        cada[i] = apr[i].potencia * apr[i].horas;
        total +=  apr[i].potencia * apr[i].horas;
    }
    scanf("%d", &dias);

    printf("%d\n", total * dias);
    for(i = 0; i < num; i++){
        printf("%s %.1f%\n",apr[i].nome, (cada[i] / total) * 100);
    }

    return 0;
}
