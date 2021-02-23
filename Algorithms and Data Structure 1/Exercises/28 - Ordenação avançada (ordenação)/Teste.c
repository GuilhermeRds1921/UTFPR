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
void ShellSort(int *V, int tam) {
    int i, j, key, h = 1;
    while(h < tam){
        h = 3*h+1;
    }
    while (h  > 0) {
        for(i=h; i<tam; i++){
            key= V[i];
            j= i;
            while (j > h-1 && key <= V[j-h]){
                V[j]= V[j-h];
                j = j-h;
            }
            V[j] = key;
        }
        h = h/3;
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
    ShellSort(V, tam);
    Mostrar(V, tam);
    return 0;
}
