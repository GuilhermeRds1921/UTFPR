#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
    int matricula;
    char nome[40];
    char curso[40];
    float coef;
}Aluno;
struct lista{
    Aluno dados[10];
    int qtd;
};
typedef struct lista Lista;
Lista* cria(){
    Lista* li = (Lista*)malloc(sizeof(Lista));
    li->qtd = 0;
    return li;
}
int inserir(Lista* li, Aluno X){
    if(li== NULL){
        return -1;
    }
    li->dados[li->qtd] = X;
    li->qtd++;
    return 1;
}
void Bolha(Lista* V, int N){
    int i, j;
    Aluno aux;
    for(i=N-1; i>0; i--){
        for(j=0; j<i; j++){
            if(strcmp(V->dados[j].nome , V->dados[j+1].nome)>0){
                aux = V->dados[j];
                V->dados[j] = V->dados[j+1];
                V->dados[j+1] = aux;
            }
            if(strcmp(V->dados[j].nome , V->dados[j+1].nome)==0){
                if(V->dados[j].matricula > V->dados[j+1].matricula){
                   aux = V->dados[j];
                    V->dados[j] = V->dados[j+1];
                    V->dados[j+1] = aux;
                }
            }
        }
    }
}
int main() {
    int num, i=0;
    scanf("%d", &num);
    Lista *li = cria();
    Aluno X;
    for(i=0; i<num; i++){
        scanf("%d", &X.matricula);
        scanf("%s", &X.nome);
        scanf("%s", &X.curso);
        scanf("%f", &X.coef);

        inserir(li, X);
    }
        Bolha(li, num);
    for(i=0; i<num; i++){
        printf("%s ", li->dados[i].nome);
        printf("%d ", li->dados[i].matricula);
        printf("%s ", li->dados[i].curso);
        printf("%.2f ", li->dados[i].coef);
        printf("\n");
    }



        return 0;
  }

