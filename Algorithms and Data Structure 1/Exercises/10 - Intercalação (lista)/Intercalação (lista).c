#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define Max 100
//Arquivo.h
struct num{
    int itens[Max];
};

typedef struct lista Lista;

Lista* criar();

int inserir(Lista* li, struct num vetor);

Lista* intercalar(Lista* li, Lista* l2, int k);

int buscar(Lista *li, int key, int k, int count);
//Arquivo.c
struct lista{
    struct num dados[Max];
    int qtd;
};

Lista* criar(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    li->qtd = 0;

    return li;
}
int inserir(Lista* li, struct num vetor){
    if(li == NULL){
        return -1;
    }
    if (li->qtd == Max){
       return 0;
     }
    li->dados[li->qtd] = vetor;
    li->qtd++;
    return 1;
}

int buscar(Lista *li, int key, int k, int count){
    int i = 0, j = 0;
        do{
            if(li->dados[k].itens[j] == key){
                i++;
            }
            j++;
        }while(j < count);
    if(i == 0){
        return 1;
    }
    return 0;
}
Lista* intercalar(Lista* l1, Lista* l2, int k){
    int j = 0, p = 0, count = 1;
    Lista *l3 = criar();

   do{
       if(l1->dados[k].itens[j] != -1 ){
            if(buscar(l3,l1->dados[k].itens[j], k, count)){

            l3->dados[k].itens[p] = l1->dados[k].itens[j];
            count++;
            p++;
                }
       }

       if(l2->dados[k].itens[j] != -1){
            if(buscar(l3,l2->dados[k].itens[j], k, count)){

            l3->dados[k].itens[p] = l2->dados[k].itens[j];
            count++;
            p++;
                }
       }

       j++;
   }while(l1->dados[k].itens[j-1] != -1 && l2->dados[k].itens[j-1] != -1);

        j=0;
        do{
            if(l3->dados[k].itens[j] == -1){
                break;
            }
            printf("%d ", l3->dados[k].itens[j]);
            j++;
        }while(j < p);


    printf("\n");
    return l3;
}
int main() {
    int casos, i = 0, j;
    Lista *l1, *l2, *l3;
    l1 = criar();
    l2 = criar();
    l3 = criar();
    struct num vetor1, vetor2;
    scanf("%d", &casos);

    for(j = 0; j < casos; j++){
        i = 0;
        do{
            scanf("%d", &vetor1.itens[i]);
            i++;
        }while(vetor1.itens[i-1] != -1);
        i = 0;
        do{
            scanf("%d", &vetor2.itens[i]);
            i++;
        }while(vetor2.itens[i-1] != -1);

        inserir(l1, vetor1);
        inserir(l2, vetor2);
        l3 = intercalar(l1, l2, j);
    }
    return 0;
}
