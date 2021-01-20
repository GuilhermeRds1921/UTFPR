#include <stdio.h>
int main(void)
{
    int i, num1, num2;

    printf("informe um limite ");
    scanf("%d", &num1);
    printf("informe outro limite ");
    scanf("%d", &num2);

    if(num1>num2)
    {
        i=num1;
        num1 = num2;
        num2=i;}
    for(i=num1; i<=num2; i++)
    {
        printf("\n%d", i);
        if(i%2==0)
        {
            printf("\t%d divisivel por 2 ", i);
        }
        else if(i%3==0)
        {
            printf("\t%d divisivel por 3", i);
        }
    }

return 0;
}
