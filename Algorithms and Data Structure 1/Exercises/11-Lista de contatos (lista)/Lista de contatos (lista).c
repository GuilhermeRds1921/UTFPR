#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define Max 100
//Arquivo.h
struct nome{
    char nomex[30];
};
typedef struct lista Lista;

Lista* cria_lista();

int inserir_final(Lista* li, struct nome al);

int consulta_qualquer(Lista* li, char* po, struct nome *al);

void libera_lista(Lista* li);
//Arquivo.c
struct lista{
    int qtd;
    struct nome dados[Max];
};
Lista* cria_lista(){
    Lista *li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        li->qtd = 0;
        return li;
    }
        return 0;
}
int inserir_final(Lista* li, struct nome al){
    if(li == NULL){
        return -1;
    }
    if(li->qtd == Max){
        return 0;
    }
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;

}
int consulta_qualquer(Lista* li, char* po, struct nome *consultar){
    int i=0;
    if(li==NULL){
        return -1;
    }
    for(i=0; i<li->qtd; i++){

        if(strstr(li->dados[i].nomex, po)){
            *consultar = li->dados[i];
            printf("%s\n", consultar->nomex);

        }
    }
    if(i==li->qtd){
        return 0;
    }

    return 1;
}
void libera_lista(Lista* li){
    free(li);
}
//Main.c
int main() {
    int num, i;
    char mat[Max];
    scanf("%s", &mat);
    scanf("%d", &num);
    char *po = mat;
    Lista *li;
    li =  cria_lista();

    struct nome receber, *consultar;

    for(i=0; i<num; i++){
        scanf("%s", &receber.nomex);
        inserir_final(li, receber);

    }
    consulta_qualquer(li, po, &consultar);
  libera_lista(li);

    return 0;
}
