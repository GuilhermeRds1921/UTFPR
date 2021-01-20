#include <stdio.h>
int main(void)
{
    int i, num1, cont=0;
    float media;

    for(i=500; i>=0; i--)
    {
        if(i%2!=0 && i%7==0)
        {
            printf("\t%d", i);
        }
        if(i%2==0 && i%3==0)
        {
            num1 = num1 + i;
            cont++;
        }
    }
    media = num1 / cont;
    printf("\n\nA media dos pares divisiveis por 7 e: %.2f", media);

}
