#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void quicksort(char* Nome[], int E, int D);
int separar(char* Nome[], int E, int D);

void quicksort(char* Nome[], int E, int D){
    int meio;

    if(D > E){
        meio = separar(Nome, E, D);
        quicksort(Nome, E, meio-1);
        quicksort(Nome, meio+1, D);
    }
}
int separar(char* Nome[], int E, int D){
    int e, d;
    char* pivo = malloc(sizeof(char*));
    char* aux = malloc(sizeof(char*));
    e = E;
    d = D;
    pivo = Nome[E];
    while(e < d){
       while(strcmp(Nome[e], pivo) <= 0){
            e++;
        }
        while(strcmp(Nome[d], pivo) > 0){
            d--;
        }
        if(e < d){
            aux = Nome[e];
            Nome[e] = Nome[d];
            Nome[d] = aux;
        }
    }
    Nome[E] = Nome[d];
    Nome[d] = pivo;
    return d;
}

int main() {
    int i, n;
    scanf("%d", &n);
    char* Nome[n];
     for(i = 0; i < n; i++){
            Nome[i] = malloc(sizeof(char*));
         scanf("%s", Nome[i]);
     }
    quicksort(Nome, 0, n);

    for(i = 1; i < n+1; i++){
        printf("%s \n", Nome[i]);
    }
    return 0;
}
