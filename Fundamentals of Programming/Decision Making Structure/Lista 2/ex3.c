#include <stdio.h>
int main(void)
{
    char bem, dor;
    float tem;
    printf("Paciente se sente bem? ");
    scanf("%c", &bem);

    if(bem=='s'||bem=='S')
        {
        printf("Saudavel");
        }
     else if(bem=='n'||bem=='N')
        {
            fflush(stdin);
        printf("Paciente tem dor? ");
        scanf("%c", &dor);
      if(dor=='s'||dor=='S')
        {
            printf("Doente");
            }
        else if(dor=='n'||dor=='N')
            {
                fflush(stdin);
                printf("Temperatura do paciente? ");
                scanf("%d", &tem);
            if(tem<=37){
                printf("Saudavel");}
                else {
                    printf("Doente");
                }


            }
        }


    else{
        printf("Resposta invalida.");
    }

return 0;
}
