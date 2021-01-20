#include <stdio.h>
int main(void)
{
    char letra;
    int cont=0, contletra=0;

    do
    {
        printf("Escreva um caractere: ");
        scanf(" %c", &letra);
        fflush (stdin);

            if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
            {
                contletra++;
            }

            if (letra!='0')
            {
                cont++;
            }

    }while(letra != '0');

    printf("O total de vogais minusculas eh: %d\n", contletra);
    printf("O total de caracteres digitados eh: %d", cont);

}
