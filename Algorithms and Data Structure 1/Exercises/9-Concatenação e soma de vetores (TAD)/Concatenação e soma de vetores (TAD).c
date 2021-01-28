#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int *v;
    int q;
    int n;
}Vetor;

Vetor * iniciar(int n){
    Vetor *vet = (Vetor *) malloc(sizeof(Vetor));
    vet->v = (int *) malloc(n * sizeof(int));
    return vet;
}
int inserir(Vetor *v, int x){
    for(int i=0; i<x; i++){
        scanf("%d", &v->v[i]);
        v->q++;
    }
    if(v != NULL){
        return 1;
    }
    else{
        return 0;
    }

}
Vetor * concatenar(Vetor *v1, Vetor *v2){
    int tam = (v1->q) + (v2->q);
    Vetor *conc = (Vetor *) malloc(sizeof(Vetor));
    conc->v = (int *) malloc(tam * sizeof(int));

    for(int i=0; i<v1->q; i++){
        conc->v[i] = v1->v[i];
        printf("%d ", conc->v[i]);
    }

    for(int i=v1->q; i<tam; i++){
        conc->v[i] = v2->v[i-(v1->q)];
        printf("%d ",conc->v[i]);
    }
    printf("\n");
    return conc;
}
Vetor * soma(Vetor *v1, Vetor *v2){
    Vetor *v3;
    int i, p;

    if (v1->q > v2->q){
        p = v2->q;
        v3 = iniciar(v1->q);

    for( i=0; i<p; i++){
        v3->v[i] = v1->v[i] + v2->v[i];
        printf("%d ",v3->v[i]);
    }
    for(i=p; i<v1->q; i++){
           v3->v[i] = v1->v[i];
            printf("%d ",v3->v[i]);
    }
    }
    else{
        p = v1->q;
        v3 = iniciar(v2->q);
        for(i=0; i<p; i++){
            v3->v[i] = v1->v[i] + v2->v[i];
            printf("%d ",v3->v[i]);
        }
        for(i=p; i<v2->q; i++){
           v3->v[i] = v2->v[i];
            printf("%d ",v3->v[i]);
    }
    }

    return v1;
}

int main()
{
    Vetor vetor, *v1, *v2;
    v1 = &vetor;
    v2 = &vetor;
    int a;

    scanf("%d", &vetor.n);
    v1 = iniciar(vetor.n);
    a = inserir(v1, vetor.n);

    scanf("%d", &vetor.n);
    v2 = iniciar(vetor.n);
    a+= inserir(v2, vetor.n);
    if(a==0){
        printf("0\n0");
    }
    concatenar(v1, v2);
    soma(v1, v2);
}
