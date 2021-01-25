/*1) Elaborar um programa para mostrar os números pares entre 20 e 100. Fazer a média dosvalores desse intervalo que são divisíveis por 5.
*/
#include <stdio.h>
int main(void)
{
    int i, c=0, soma=0;
    float media;

    for(i=20; i<=100; i++)
    {
        if(i%2==0)
        {
            printf("%d\n", i );
        }
        if(i%5==0)
        {
            c++;
            soma= soma+i;
        }
    }
    media= (float)soma/c;
    printf("\n%.2f e a media dos numeros sao divisiveis por 5\n", media);
    return 0;
}
