/*3) Mostrar osnúmeros entre 10 e 0 (ordem decrescente) com intervalo de 0.5.
*/
#include <stdio.h>
int main(void)
{
    float i;

    for(i=10; i>=0; i=i-0.5)
    {
        printf("\n%.1f",i );
    }
    return 0;
}
