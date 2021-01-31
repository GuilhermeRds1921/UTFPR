#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define Max 1000
//Arquivo.h
struct minerar{
    char mine[Max];
};
typedef struct pilha Pilha;
Pilha* criar();
int inserir(Pilha* pi, struct minerar mi);
void liberar(Pilha* pi);
//Arquivo.c
struct pilha{
    struct minerar dados[Max];
    int qtd;
    int dim;
};

Pilha* criar(){
    Pilha* pi = (Pilha*)malloc(sizeof(Pilha));
    pi->qtd = 0;
    pi->dim = 0;
    return pi;
}

void liberar(Pilha* pi){
    free(pi);
}
int inserir(Pilha* pi, struct minerar mi){
    if(pi == NULL || pi->qtd == Max){
        return 0;
    }
    pi->dados[pi->qtd] = mi;
    pi->qtd++;
    return 1;
}
int buscar(Pilha* pi, Pilha* di){
    int tam, i=0;
    if(pi == NULL ||di ==NULL || pi->qtd == 0){
        return 0;
    }
     tam = strlen(pi->dados[pi->qtd-1].mine);
    do{
        if(pi->dados[pi->qtd - 1].mine[i] == '<'){
            di->qtd++;
        }
        if(di->qtd > 0 && pi->dados[pi->qtd - 1].mine[i] == '>')
        {
            di->dim++;
            di->qtd--;
        }
        i++;
    }while(i < tam);

    return 1;
}
int main() {
    int casos, j = 0;
    scanf("%d\n", &casos);
    Pilha* pi;
    Pilha* di;

    struct minerar mi;
   do{
        pi = criar();
        di = criar();
        scanf("%s", &mi.mine);
        inserir(pi, mi);
        buscar(pi, di);
        printf("%d\n", di->dim);
        j++;
    }while(j < casos);
    return 0;
}
