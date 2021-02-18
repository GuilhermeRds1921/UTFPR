#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Trans(int *V, int tam, int key){
    int i, aux;
    for(i=0; i<tam; i++){
        if(key == V[i]){
            if(V[0]==key){
                return i;
            }
            else{
                aux = V[i];
                V[i] = V[i-1];
                V[i-1] = aux;
            return i;
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
        Trans(V, tam, key);
    }
    for(int j=0; j<tam; j++){
         printf("%d ", V[j]);
    }
    return 0;
}
