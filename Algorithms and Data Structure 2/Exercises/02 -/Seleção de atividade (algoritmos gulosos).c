#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void ordenar(int *ini, int *fim, int num){
    int i, j, aux;
    for(i=num-1; i>0; i--){
        for(j=0; j<i; j++){
            if(fim[j] > fim[j+1]){
                aux = fim[j];
                fim[j] = fim[j+1];
                fim[j+1] = aux;

                aux = ini[j];
                ini[j] = ini[j+1];
                ini[j+1] = aux;
            }
        }
    }
}
void guloso(int* ini, int* fim, int num){
    int v[num], i, j=0;
    for(i=0; i<num; i++){
        if(ini[i] > j || i==0){
            j=fim[i];
            v[i]= 1;
        }
    }
    printf("Aulas alocadas: ");
    for(i=0; i<num; i++){
        if(v[i]==1){
            printf("%d ", i);
        }
    }
}
int main() {

    int num, i;
    scanf("%d", &num);
    int ini[num], fim[num];
    for(i=0; i<num; i++){
        scanf("%d %d", &ini[i], &fim[i]);
    }
    ordenar(ini, fim, num);
    guloso(ini, fim, num);

    return 0;
}
