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
void mostrar(MATRIZ* esparsa, int linha, int coluna, int count);

MATRIZ* criar(int linha, int coluna){
    int i;
    MATRIZ* esparsa = (MATRIZ*)malloc(sizeof(MATRIZ));
    esparsa->linha = linha;
    esparsa->coluna = coluna;
    esparsa->prox = (Lista*)malloc(linha * sizeof(Lista));

    for(i = 0; i < linha; i++){
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
    if(atual != NULL && atual->coluna == coluna){
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
void mostrar(MATRIZ* esparsa, int linha, int coluna, int count){
    Lista atual = esparsa->prox[linha];
    while(atual != NULL &&atual->coluna < coluna){
        atual = atual->prox;
    }
    if(esparsa->prox[linha] == NULL && count == 0){
        printf("->");
    }
    if(atual != NULL && atual->coluna == coluna){
        printf("-> %d,%d ", atual->coluna, atual->valor);
    }
}
int main() {
    int i, j, linha, coluna;
    scanf("%d", &linha);
    scanf("%d", &coluna);

    int matriz[linha][coluna];
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    MATRIZ* esparsa = criar (linha, coluna);

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(matriz[i][j] != 0){
                 converter(esparsa, matriz[i][j], i, j);

            }
        }
    }

    for(i = 0; i < linha; i++){
        printf("%d: ", i);
        int count = 0;
        for(j = 0; j < coluna; j++){
           mostrar(esparsa, i, j, count);
            count++;
        }
        printf("\n");
    }
    return 0;
}


