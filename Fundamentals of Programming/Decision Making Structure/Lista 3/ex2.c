#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Digite um caracter: ");
    scanf("%c", &ch);

     ch = toupper(ch);
    if(ch>='A'&&ch<='Z'){
    printf("Maiusculo: %c\n", ch);
    printf("O caracter digitado pertence ao albafeto\n");

    switch(ch){
        case'A':
             printf("E uma Vogal");
        break;
        case 'E':
             printf("E uma Vogal");
        break;
        case 'I':
             printf("E uma Vogal");
        break;
        case 'O':
             printf("E uma Vogal");
        break;
        case 'U':
             printf("E uma Vogal");
        break;

        default:

            printf("Nao e uma vogal");
            break;
    }
    }
       else{
        printf("Nao pertence ao alfabeto");
    }
    return 0;
}
