#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define Max 10000
//Arquivo.h
struct num{
    int n;
};
typedef struct lista Lista;
Lista* criar();
int inserir(Lista* li, struct num X);
Lista* separarP(Lista* li);
Lista* separarI(Lista* li);
void bolha(Lista* li, int tam);
Lista* juntar(Lista* li, Lista* l2, Lista* l3);
void mostrar(Lista* li);
//Arquivo.h
struct lista{
    struct num dados[Max];
    int qtd;
};
Lista* criar(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    li->qtd = 0;
    return li;
}
int inserir(Lista* li, struct num X){
    if(li == NULL || li->qtd == Max-1){
        return -1;
    }
    li->dados[li->qtd] = X;
    li->qtd++;
    return 0;
}
int retirar(Lista* li, int pos){
     if(li==NULL||li->qtd == 0){
        return -1;
    }
    int i=0, j=0;
    while(i< li->qtd && li->dados[i].n != pos){
        i++;
    };
    if(i==0){
        return 0;
    }
    for(j=i; j< li->qtd-1; j++){
        li->dados[j] = li->dados[j+1];
    }
    li->qtd--;
    return 1;
}
Lista* separarP(Lista* li){
    int i, j, count;
    Lista *l2;
    l2 = criar();
    count = li->qtd;
    for(i=0; i<li->qtd; i++){
        if((li->dados[i].n)%2 ==0){
            inserir(l2, li->dados[i]);
        }
    }
    return l2;
}
Lista* separarI(Lista* li){
    int i, j, count;
    Lista *l2;
    l2 = criar();
    count = li->qtd;
    for(i=0; i<li->qtd; i++){
        if((li->dados[i].n)%2 !=0){
            inserir(l2, li->dados[i]);
        }
    }
    return l2;
}
void bolha(Lista* li, int tam){
    int i, j;
    Lista *aux;
    aux = criar();
    for(j=tam-1; j>0; j--){
        for(i=0; i<j;i++)
        {
            if(li->dados[i].n>li->dados[i+1].n)
            {
                aux->dados[i]=li->dados[i];
                li->dados[i]=li->dados[i+1];
                li->dados[i+1]=aux->dados[i];
            }
        }
    }
}
Lista* juntar(Lista* li, Lista* l2, Lista* l3){
    int i, j;
    for(i=0; i<l2->qtd; i++){
        inserir(li, l2->dados[i]);
    }
    for(j=l3->qtd-1; j>=0; j--){
        inserir(li, l3->dados[j]);
    }
    return li;
}
void mostrar(Lista* li){
    int i;
    for(i=0; i<li->qtd; i++){
        printf("%d\n", li->dados[i].n);
    }
}
int main() {
    int num, i;
    scanf("%d", &num);
    Lista* li, *l2, *l3;
    li = criar();
    l2 = criar();
    l3 = criar();
    struct num X;
    for(i=0; i<num; i++){
        scanf("%d", &X.n);
        inserir(li, X);
    }
    l2 = separarP(li);
    l3 = separarI(li);
    bolha(l3, l3->qtd);
    bolha(l2, l2->qtd);
    free(li);
    li= criar();
    juntar(li, l2, l3);

    mostrar(li);
    return 0;
}


