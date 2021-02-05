#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define Max 1000
//Arquivo.h
    struct num{
        int n;
    };
typedef struct fila Fila;
Fila* criar();
int inserir(Fila* fi, struct num X);
Fila* juntar(Fila* fi, Fila* f2);
void bolha(Fila* conc, int tam);
void mostrar(Fila* conc);
//Arquivo.c
    struct fila{
        struct num dados[Max];
        int qtd;
    };
Fila* criar(){
    Fila *fi = (Fila*) malloc(sizeof(Fila));
    fi->qtd = 0;
    return fi;
}
int inserir(Fila* fi, struct num X){
    if(fi == NULL){
        return -1;
    }
    fi->dados[fi->qtd] = X;
    fi->qtd++;
    return 0;
}
Fila* juntar(Fila* fi, Fila* f2){
    int i, menor, maior, j=0;
    Fila* conc;
    conc = criar();
    for(i=0; i<fi->qtd; i++){
        inserir(conc, fi->dados[i]);
    }
    for(i=0; i<f2->qtd; i++){
        inserir(conc, f2->dados[i]);
    }
    return conc;
}
void bolha(Fila* conc, int tam){
    int i, j;
    Fila *aux;
    aux= criar();
    for(j=tam-1; j>0; j--){
        for(i=0; i<j;i++)
        {
            if(conc->dados[i].n>conc->dados[i+1].n)
            {
                aux->dados[i]=conc->dados[i];
                conc->dados[i]=conc->dados[i+1];
                conc->dados[i+1]=aux->dados[i];
            }
        }
    }
}
void mostrar(Fila* conc){
    int i;
    for(i=0; i<conc->qtd; i++){
        printf("%d ", conc->dados[i].n);
    }
}
int main() {
    int i;
    Fila *fi, *f2, *conc;
    struct num X;
    fi = criar();
    f2 = criar();
    conc = criar();

    do{
        scanf("%d", &X.n);
         if(X.n!=-1){
            inserir(fi, X);
        }
    }while(X.n != -1);
     do{
        scanf("%d", &X.n);
        if(X.n!=-1){
            inserir(f2, X);
        }
    }while(X.n != -1);

     conc = juntar(fi,f2);
     bolha(conc, conc->qtd);
     mostrar(conc);
    return 0;
}


