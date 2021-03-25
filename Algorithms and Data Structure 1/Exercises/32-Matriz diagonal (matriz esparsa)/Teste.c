#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct Mtz MATRIZ;
typedef struct no NO;
typedef NO* Lista;
struct Mtz{
    int linha;
    int coluna;
    Lista* prox;
};

struct no{
    int valor;
    int coluna;
    NO* prox;
};

MATRIZ* criar(int linha, int coluna);
int converter(MATRIZ* esparsa, int Valor, int linha, int coluna);
int conferir(MATRIZ* esparsa, int linha, int coluna, int p);
MATRIZ* criar(int linha, int coluna){
    int i;
    MATRIZ* esparsa = (MATRIZ*)malloc(sizeof(MATRIZ));
    esparsa->linha = linha;
    esparsa->coluna = coluna;
    esparsa->prox = (Lista*)malloc(linha * sizeof(Lista));

    for(i=0; i<linha; i++){
        esparsa->prox[i] = NULL;
    }
    return esparsa;
}
int converter(MATRIZ* esparsa, int Valor, int linha, int coluna){
    Lista antes = NULL;
    Lista atual = esparsa->prox[linha];
    while(atual != NULL && atual->coluna < coluna){
        antes = atual;
        atual = atual->prox;
    }
    if(atual!=NULL && atual->coluna == coluna){
        atual->valor = Valor;
    }
    else{
        Lista Elem = (Lista)malloc(sizeof(NO));
        Elem->valor = Valor;
        Elem->coluna = coluna;
        Elem->prox = atual;

        if(antes == NULL){
            esparsa->prox[linha] = Elem;
        }
        else{
            antes->prox = Elem;
        }
    }

    return 1;
}
int conferir(MATRIZ* esparsa, int linha, int coluna, int p){
    Lista atual = esparsa->prox[linha];
    while(atual !=NULL &&atual->coluna < coluna){
        atual = atual->prox;
    }
    if(atual !=NULL && atual->coluna ==coluna){
        if(linha != atual->coluna){
            p++;
        }
    }
    return p;
}
int main() {
    int i, j, quadrada, p=0;
    scanf("%d", &quadrada);

    int matriz[quadrada][quadrada];
    for(i=0; i<quadrada; i++){
        for(j=0; j<quadrada; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    MATRIZ* esparsa = criar (quadrada, quadrada);

    for(i=0; i<quadrada; i++){
        for(j=0; j<quadrada; j++){
            if(matriz[i][j]!=0){
                 converter(esparsa, matriz[i][j], i, j);

            }
        }
    }

    for(i=0; i<quadrada; i++){
        for(j=0; j<quadrada; j++){
           p = conferir(esparsa, i, j, p);
        }
    }
    if(p==0){
        printf("diagonal");
    }
    else{
        printf("nao diagonal");
    }
    return 0;
}


