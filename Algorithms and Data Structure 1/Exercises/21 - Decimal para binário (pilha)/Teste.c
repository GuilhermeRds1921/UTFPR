#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Arquivo.h
struct num{
    int n;
};
typedef struct elemento* Pilha;

Pilha* criar();
int inserir(Pilha* pi, struct num X);
int Binario(Pilha* pi, Pilha* bi);
void Mostrar(Pilha* bi);

//Arquivo.c
struct elemento{
    struct num dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

Pilha* criar(){
    Pilha* pi = (Pilha*)malloc(sizeof(Pilha));
    if(pi != NULL){
        *pi = NULL;
    }
    return pi;
}

int inserir(Pilha* pi, struct num X){
    if(pi == NULL){
        return -1;
    }
    Elem* no = (Elem*)malloc(sizeof(Elem));
    no->dados = X;
    no->prox = (*pi);
    *pi = no;
    return 1;
}

int Binario(Pilha* pi, Pilha* bi){
    if(pi == NULL || bi == NULL){
        return -1;
    }
    struct num X;

        X.n = ((*pi)->dados.n) % 2;
        inserir(bi, X);

     while(((*pi)->dados.n) / 2 > 0){
         (*pi)->dados.n = ((*pi)->dados.n) / 2;
         X.n = ((*pi)->dados.n) % 2;
         inserir(bi, X);
     }
    return 1;
}

void Mostrar(Pilha* bi){
    Elem* no = *bi;
    while(no != NULL){
        printf("%d", no->dados.n);
        no = no->prox;
    }
}

int main() {
    struct num X;
    Pilha* pi = criar();
    Pilha* bi = criar();

    scanf("%d", &X.n);
    inserir(pi, X);

    Binario(pi, bi);
    Mostrar(bi);

    return 0;
}
