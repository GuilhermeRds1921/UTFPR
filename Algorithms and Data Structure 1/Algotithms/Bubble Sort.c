#include <stdio.h>
void Bolha(int *V, int N){
    int i, j, aux;
    for(i = N-1; i>0; i--){
        for(j = 0; j<i; j++){
            if(V[j] > V[j+1]){
                aux = V[j];
                V[j] = V[j+1];
                V[j+1] = aux;
            }
        }
    }
}

//Alearotio
void gerarVetor(int *V, int N){
    int i;
    srand(time(NULL));
    for(i=0;i<N;i++){
        V[i]=rand()%((200-1)+1)+1;
    }
}
// Mostrar
void Mostrar(int *V, int N){
    int i;
    for(i=0; i<N; i++){
            if(i%10==0){
                printf("\n");
            }
        printf("%d\t", V[i]);
    }
}
