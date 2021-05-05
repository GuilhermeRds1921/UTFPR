#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct hash Hash;
typedef struct elemento* Lista;
typedef struct elemento Elem;
//HashFechado
struct chave{
    int num;
};
Hash* criar(int n);
int inserir(Hash* hs, struct chave X);
int HashF(int n, int elem);
int ReHash(int pos, int i, int n);

struct hash{
    int qtd;
    int n;
    struct chave **key;
};
Hash* criar(int n){
    int i;
    Hash* hs = (Hash*) malloc(sizeof(Hash));
    hs->n = n;
    hs->key = (struct chave**)
        malloc(n * sizeof(struct chave*));
    if(hs->key == NULL){
        free(hs);
        return NULL;
    }
    hs->qtd = 0;
    for(i=0; i<hs->n; i++){
        hs->key[i] = NULL;
    }
    return hs;
}
int ReHash(int pos, int i, int n){
    return ((pos + i) %n);
}
int HashF(int n, int elem){
    int pos;
    if(elem<0){
        elem*=-1;
    }
    pos = elem % n;
    return pos;
}
int inserir(Hash* hs, struct chave X){
    if(hs == NULL || hs->qtd == hs->n){
        return 0;
    }
    int i, h1, h2;
    h1 = HashF(hs->n, X.num);

    for(i=0; i<hs->n; i++){
        h2 = ReHash(h1, i, hs->n);
        if(hs->key[h2] == NULL){
            struct chave* new;
            new = (struct chave*)
                malloc(sizeof(struct chave));
            if(new ==NULL){
                return 0;
            }
            *new = X;
            hs->key[h2] = new;
            hs->qtd++;
            return 1;
        }
    }
    return 0;
}

//Lista Encadeada

Lista* criarLista();
int inserirLista(Lista* li, struct chave Z);

struct elemento{
    struct chave dados;
    struct elemento *prox;
};
Lista* criarLista(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}
int inserirLista(Lista* li, struct chave Z){
    if(li == NULL){
        return -1;
    }
    Elem* no = (Elem*)malloc(sizeof(Elem));

    no->dados = Z;
    no->prox = NULL;
    if((*li)==NULL){
        *li= no;
    }
    else{
        Elem *aux = *li;
        while(aux->prox !=NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}

//HashAberto
int Converter(Hash* aberto, Hash* hs);
int inserirAberto(Lista* tabela[], struct chave Y, Hash* hs);

int inserirAberto(Lista* tabela[], struct chave Y, Hash* hs){
    int h1;
    h1 = HashF(hs->n, Y.num);
    inserirLista(tabela[h1],Y);
    return 1;
}
int converter(Lista* tabela[],Hash* hs){
    int i;
    struct chave Y;
    for(i=0; i<hs->n; i++){
        if(hs->key[i]!=NULL){
             Y.num = (hs->key[i]->num);
             inserirAberto(tabela, Y, hs);
        }

    }
    for(i=0; i<hs->n; i++){
        printf("%d: ->", i);
        Elem* no2 = *(tabela[i]);
        while(no2!=NULL){
            printf(" %d ", no2->dados.num);
            no2 = no2->prox;
            if(no2 !=NULL){
                printf("->");
            }
        }
        printf("\n");
    }
    return 1;
}
int main() {
    int n, quant, i;
    scanf("%d", &n);
    scanf("%d", &quant);
    if(n<0){
        n*=-1;
    }
    if(quant<0){
        quant*=-1;
    }
    Hash* hs = criar(n);
    struct chave X;

    for(i=0; i<quant; i++){
        scanf("%d", &X.num);
        inserir(hs, X);
    }
    Lista* tabela[n];
    for(i=0; i<n; i++){
        tabela[i]= criarLista();
    }
    converter(tabela, hs);
    return 0;
}

