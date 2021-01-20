#include <stdio.h>
int main(void)
{
    int i, num1, num2;

    printf("Informe um limite: ");
    scanf("%d", &num1);
    printf("Informe outro limite: ");
    scanf("%d", &num2);

    if(num1>num2)
    {
        i=num1;
        num1 = num2;
        num2=i;}
    for(i=num1; i<=num2; i++)
    {
        if(i%3==0)
        {
            if(i%2==0){
                 printf("\t%d", i);
            }

        }
    }
return 0;
}
