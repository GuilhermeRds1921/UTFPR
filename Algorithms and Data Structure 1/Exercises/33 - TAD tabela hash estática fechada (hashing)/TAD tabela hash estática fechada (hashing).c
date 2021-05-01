#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Arquivo.h
struct chave{
    int num;
};
typedef struct hash Hash;
Hash* criar(int n, float c);
int inserir(Hash* hs, struct chave X);
//Arquivo.c
struct hash{
    int qtd;
    int n;
    float c;
    struct chave **key;
};
Hash* criar(int n, float c){
    int i;
    Hash* hs = (Hash*) malloc(sizeof(Hash));
    hs->n = n;
    hs->c = c;
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
int FuncHash(float c, int n, int elem){
    float valor;
    valor = elem * c;
    valor = valor - (int)valor;
    return (int) (n * valor);
}
int ReHash(int h1, int elem, int i, int n){
    int h2 = 1 + elem%(n - 1);
    return (((h1 + i * h2)) % n);
}
int inserir(Hash* hs, struct chave X){
    if(hs == NULL || hs->qtd == hs->n){
        return 0;
    }
    int i, h1, h2;
    h1 = FuncHash(hs->c, hs->n, X.num);

    for(i=0; i<hs->n; i++){
        h2 = ReHash(h1, X.num, i, hs->n);
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
            printf("%d\n", h2);
            return 1;
        }

    }
    return 0;
}

int main() {
    int n, quant, i;
    float c;
    scanf("%f %d", &c, &n);
    scanf("%d", &quant);

    Hash* hs = criar(n, c);
    struct chave X;

    for(i=0; i<quant; i++){
        scanf("%d", &X.num);
        inserir(hs, X);
    }
    return 0;
}


