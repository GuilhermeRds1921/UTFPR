#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Receber(int *V, int tam){
    int i;
    for(i=0; i<tam; i++){
        scanf("%d", &V[i]);
    }
}
void Bubble(int *V, int tam){
    int aux, i, j;
    for(j=tam-1; j>0; j--){
        for(i=0; i<j;i++){
            if(V[i]>V[i+1]) {
                aux=V[i];
                V[i]=V[i+1];
                V[i+1]=aux;
            }
        }
    }
}
void Mostrar(int *V, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("%d ", V[i]);
    }
}
int main() {
    int tam;
    scanf("%d", &tam);
    int v[tam];
    int *V = v;
    Receber(V, tam);
    Bubble(V, tam);
    Mostrar(V, tam);
    return 0;
}
