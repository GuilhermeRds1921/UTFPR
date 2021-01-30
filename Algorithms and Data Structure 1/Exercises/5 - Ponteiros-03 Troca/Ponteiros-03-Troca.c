#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void troca (int *A, int *B){
    int aux;
    aux = *A;
    *A = *B;
    *B = aux;
}
int main() {
    int num, a, b, i;
    scanf("%d", &num);
    for(i = 0; i < num; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        troca(&a, &b);

        printf("A=%d B=%d\n", a, b);
    }

    return 0;
}
