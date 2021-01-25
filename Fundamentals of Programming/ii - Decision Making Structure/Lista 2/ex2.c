#include <stdio.h>
int main(void)
{
    int opcao, num, a, b, c;
    printf("Menu de opcoes:\n");
    printf("1-Mostrar os numeros em ordem decrescente: \n");
    printf("2-Mostrar os numeros em ordem crescente: \n");
    printf("3-Mostrar os numeros que sao multiplos de 2: \n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("primeiro numero: ");
    scanf("%d", &a);
    printf("segundo numero: ");
    scanf("%d", &b);
    printf("terceiro numero: ");
    scanf("%d", &c);

    switch(opcao){
      case 1:
          if(a>b && a>c && b>c ){
          printf("Decrescente: %d, %d,  %d", a, b, c);}
          else if(a>b && a>c && c>b ){
          printf("Decrescente: %d, %d, %d", a, c, b);
          }
          if(b>a && b>c && a>c ){
          printf("Decrescente: %d, %d, %d", b, a, c);}
          else if(b>a && a>c && c>a ){
          printf("Decrescente: %d, %d, %d", b, c, a);
          }
          if(c>a && c>b&& a>b ){
          printf("Decrescente: %d, %d, %d", c, a, b);}
          else if(c>a && c>b && b>a ){
          printf("Decrescente: %d, %d, %d", c, b, a);
          }
          break;
      case 2:
        if(a>b && a>c && b>c ){
          printf("Crescente: %d, %d, %d", c, b, a);}
          else if(a>b && a>c && c>b ){
          printf("Crescente: %d, %d, %d", b, c, a);
          }
          if(b>a && b>c && a>c ){
          printf("Crescente: %d,  %d,  %d", c, a, b);}
          else if(b>a && a>c && c>a ){
          printf("Crescente: %d, %d, %d", a, c, b);
          }
          if(c>a && c>b&& a>b ){
          printf("Crescente: %d, %d,  %d", b, a, c);}
          else if(c>a && c>b && b>a ){
          printf("Crescente: %d,  %d, %d", a, b, c);
          }
          break;
      case 3:
          if(a%2==0 && b%2==0 && c%2==0){
            printf("%d, %d, %d, sao multiplos de 2.", a, b, c);}
          if(a%2==0 && b%2==0 && c%2!=0){
            printf("%d, %d, sao multiplos de 2.", a, b);}
          if(a%2==0 && b%2!=0 && c%2==0){
            printf("%d, %d, sao multiplos de 2.", a, c);}
          if(a%2!=0 && b%2!=0 && c%2==0){
            printf("%d, %d, sao multiplos de 2.", b, c);}
          if(a%2==0 && b%2!=0 && c%2!=0){
            printf("%d, e divisivel por 2", a);}
          if(a%2!=0 && b%2==0 && c%2!=0){
            printf("%d, e divisivel por 2", b);}
          if(a%2!=0 && b%2!=0 && c%2==0){
            printf("%d, e divisivel por 2", c);}
            break;
          }
    return 0;
}
