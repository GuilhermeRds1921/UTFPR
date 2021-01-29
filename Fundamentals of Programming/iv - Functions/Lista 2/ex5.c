/*5) Copiar todas as funções criadas nos exercícios anteriores para dentro de uma biblioteca chamada
"diversos.h". Fazer um programa que use essa biblioteca e tenha o seguinte menu de opções (use switch case):*/
#include <stdio.h>
#include "diversos.h"

int main(void)
{
    int num;
    char opcao;
    printf("\n1- Calcular Quadrado de um Numero");
    printf("\n2- Converter centimetros em polegadas");
    printf("\n3- Converter valor  para Real ou Dollar");
    printf("\n4- Multiplicar 2 Numeros");
    do
    {
        printf("\nEscolha uma Opcao: ");
        scanf("%d", &num);


        switch (num)
        {
        case 1:
            quadrado();
            break;
        case 2:
            poleg();
            break;
        case 3:
            convert();
            break;
        case 4:
            mult();
            break;
        default:
            printf("\nOpcao Invalida. ");
        }

        printf("\n\nDeseja Repetir o Programa?(S ou N)");
        fflush(stdin);
        scanf("%c", &opcao);
    }
    while(opcao=='s'||opcao=='S');
    return 0;
}

