#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define Max 1000
//Arquivo.h
struct comandos{
    int com;
};
typedef struct fila Fila;
Fila* cria();
void liberar(Fila* fi);
int inserir(Fila* fi, struct comandos x);
int retirar(Fila* fi, Fila* ret);
void mostrar(Fila* ret, Fila* fi, Fila* pref);
//Arquivo.c
struct fila{
    struct comandos dados[Max];
    int qtd;
};
Fila* criar(){
    Fila *fi = (Fila*) malloc(sizeof(Fila));
    fi->qtd = 0;
    return fi;
}
void liberar(Fila* fi){
    free(fi);
}
int inserir(Fila* fi, struct comandos x){
    if(fi == NULL || fi->qtd == Max-1){
        return -1;
    }
    fi->dados[fi->qtd] = x;
    fi->qtd++;
    return 0;
}
int retirar(Fila* fi, Fila* ret){
    int i;

    if(fi->qtd == 0){
        return -1;
    }
    inserir(ret, fi->dados[0]);
    for(i=0; i<fi->qtd; i++){
        fi->dados[i] = fi->dados[i+1];
    }
    fi->qtd--;
    return 0;
}
void mostrar(Fila* ret, Fila* fi, Fila* pref){
    int i;
    for(i=0; i<ret->qtd; i++){
        printf("%d ", ret->dados[i].com);
    }
    printf("\nRestaram %d pessoas na fila", fi->qtd + pref->qtd);
}

int main() {
    char opcao;
    Fila *fi, *pref, *ret;

    struct comandos X;
        fi = criar();
        pref = criar();
        ret =criar();
    do{
        scanf("%c", &opcao);
            switch(opcao){
                case 'N':
                    if(fi->qtd >4){
                        break;
                    }
                    scanf("%d", &X.com);
                    inserir(fi, X);
                    break;
                case 'I':
                    if(pref->qtd >4){
                        break;
                    }
                    scanf("%d", &X.com);
                    inserir(pref, X);
                    break;
                case 'G':
                    if(pref->qtd >4){
                        break;
                    }
                    scanf("%d", &X.com);
                    inserir(pref, X);
                    break;
                case 'C':
                    if(pref->qtd==0){
                        retirar(fi, ret);
                    }
                    retirar(pref, ret);
                    break;
                default:
                    break;
            }
            }while(opcao!='F');
        mostrar(ret, fi, pref);
        liberar(fi);
        liberar(pref);
        liberar(ret);
    return 0;
}


