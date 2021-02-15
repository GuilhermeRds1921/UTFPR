#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int BuscaBi(int *V, int tam, int key){
    int i, inicio=0, meio, fim =tam-1;
    while(inicio <= fim){
        meio = (inicio + fim)/2;

        if(key < V[meio]){
            fim = meio-1;
        }
        else{
            if(key > V[meio]){

            inicio = meio+1;
            }
        else{
            return meio;
            }
        }
    }
    return -1;
}
int main() {
    int i, tam, casos, key;
    scanf("%d", &tam);
    int v[tam];
    for(i=0; i<tam; i++){
        scanf("%d", &v[i]);

    }
    int *V = v;
    scanf("%d", &casos);
    for(i=0; i<casos; i++){
        scanf("%d", &key);
        printf("%d\n",BuscaBi(V, tam, key));
    }
    return 0;
}
