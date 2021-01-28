#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int *criar(int num){
    int *p = (int*)calloc(num, sizeof(int));

    for(int i = 0; i < num;  i++){
        scanf("%d", &p[i]);
    }
    return p;
}
int *aumentar(int num2, int num, int *p){
    p = (int *)realloc(p, num2 * sizeof(int));

    for(int i = num; i < num2; i++){
        scanf("%d", &p[i]);
    }
    return p;
}
int *inverter(int *vetor, int num2){
    int *invert = (int *)malloc(num2 * sizeof(int));

    for(int i = num2 - 1; i >= 0; i--){
        for(int j = 0; j < num2; j++){
            invert[j] = vetor[i];
            i--;
        }
    }
    return invert;
}
int main() {
    int num, num2, *vetor, *vetor2;

    scanf("%d", &num);
    vetor = criar(num);

    scanf("%d", &num2);
    num2 += num;
    vetor = aumentar(num2, num, vetor);

    vetor2 = inverter(vetor, num2);

     for(int i = 0; i < num2; i++){
        printf("%d ", *(vetor2 + i));
    }
     return 0;
}
