#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define Max 1000
//Arquivo.h
struct palavra{
    char word;
};
typedef struct pilha Pilha;
Pilha* criar();
int empilhar(Pilha* pi, struct palavra pa);
Pilha* desempilhar(Pilha* pi);
int conferir(Pilha* piINV, Pilha* pi2);
void liberar(Pilha*  pi);
//Arquivo.c
struct pilha{
    struct palavra dados[Max];
    int qtd;
};

Pilha* criar(){
    Pilha* pi = (Pilha*)malloc(sizeof(Pilha));
    pi->qtd = 0;
    return pi;
}
int empilhar(Pilha* pi, struct palavra pa){
    if(pi == NULL || pi->qtd == Max){
        return 0;
    }
    pi->dados[pi->qtd] = pa;
    pi->qtd++;
    return 1;
}
Pilha* desempilhar(Pilha* pi){
    if(pi == NULL || pi->qtd == 0){
        return 0;
    }
    Pilha* piINV = (Pilha*)malloc(sizeof(Pilha));
    do{
        empilhar(piINV, pi->dados[pi->qtd-1]);
        pi->qtd--;
    }while(pi->qtd-1 >= 0);
    return piINV;
}
void liberar(Pilha* pi){
    free(pi);
}
int conferir(Pilha* piINV, Pilha* pi2){
    int i = 0, p = 0;
    do{
        if(piINV->dados[i].word != pi2->dados[i].word){
            p++;
        }

        i++;
    }while(i < piINV->qtd);
   if(p == 0){
       printf("E inverso\n");
   }
    else{
        printf("N e inverso\n");
    }
    return 1;
}
int main() {
    int casos, j = 0;
    scanf("%d\n", &casos);
    Pilha* pi;
    Pilha* pi2;
    Pilha* piINV;
    struct palavra pa, p2;
   do{
        pi = criar();
        pi2 = criar();
        piINV = criar();
       do{
            scanf("%c", &pa.word);
           if(pa.word != ' '){
               empilhar(pi, pa);
           }
       }while(pa.word != ' ');
       do{
            scanf("%c", &p2.word);
           if(p2.word != '\n'){
              empilhar(pi2, p2);
           }

       }while(p2.word != '\n');

        piINV = desempilhar(pi);
        conferir(piINV, pi2);

        liberar(pi);
        liberar(pi2);
       liberar(piINV);
        j++;
    }while(j < casos);
    return 0;
}
