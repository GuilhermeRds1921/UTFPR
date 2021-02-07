#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define Max 1000
//Arquivo.h
struct numeros{
    int num;
};
typedef struct elemento* Lista;

Lista* criar();
int inserir(Lista* li, struct numeros X);
int tamanho(Lista* li, Lista* l2);
void liberar(Lista* li);
void Mostrar(Lista* li, Lista* l2);
//Arquivo.c
struct elemento{
    struct numeros dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

Lista* criar(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}
void liberar(Lista* li){
    if(li != NULL){
        Elem* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}
int inserir(Lista* li, struct numeros X){
    if(li == NULL){
        return -1;
    }
    Elem* no = (Elem*)malloc(sizeof(Elem));

    no->dados = X;
    no->prox = (*li);
    *li = no;

    return 1;
}
int tamanho(Lista* li, Lista* l2){
    int c = 0, i = 0, p = 0;
    if(li == NULL || *li == NULL){
        return 0;
    }
    Elem *no = *li;
    while(no != NULL){
        c++;
        no = no->prox;
    }
    if(c>1){
        if(c % 2 != 0){
            c++;
            p++;
        }
        c = c / 2;
        no = *li;
        while(no != NULL){
            if(i <= c - 1){
                if(p > 0){
                    if(i <= c - 2){
                        inserir(l2, no->dados);
                    }

                }
                else{
                    inserir(l2, no->dados);
                }

            }
            no = no->prox;
            i++;
        }
        i=0;
        no = *li;
        while(no != NULL){

                if(i >= c){
                Elem* remov;
                remov = *li;
                *li = (*li)->prox;
                free(remov);
            }
            no = no->prox;
            i++;

        }
    }

    return c*2;
}
void Mostrar(Lista* li, Lista* l2){
    Elem *no = *li;
    int v[Max], i, c = 0;
    while(no != NULL){
        v[c] = no->dados.num;
        c++;
        //printf("%d ", no->dados.num); //N�o consegui inverter, mas o exerc�cio s� pede para separar a metade.
        no = no->prox;
    }
    for(i = c-1; i >= 0; i--){
        printf("%d ", v[i]);
    }
    printf("\n");
    Elem *n2 = *l2;
    while(n2 != NULL){
        printf("%d ", n2->dados.num);
        n2 = n2->prox;
    }
}
int main() {
    struct numeros X;
    Lista* li = criar();
    Lista* l2 = criar();
    do{
        scanf("%d", &X.num);
        if(X.num != -1){
            inserir(li, X);
        }
    }while(X.num != -1);
    tamanho(li, l2);
    Mostrar(li, l2);
    return 0;
}
