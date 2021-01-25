#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void troca (int *A, int *B){
    int aux;
    if(*A <*B){
        aux = *B;
        *B = *A;
        *A = aux;
    }
}

int main(void){
    int num, i, a, b;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        troca(&a, &b);
        printf("A=%d B=%d\n", a, b);

    }

    return 0;
}
