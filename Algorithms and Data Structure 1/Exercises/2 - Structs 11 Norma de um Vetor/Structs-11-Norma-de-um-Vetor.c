#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct vetor_t{
    float x;
    float y;
    float norm;
}vetor_t;

vetor_t calculaNorma(vetor_t vetor){
    vetor.norm = pow(vetor.x, 2) + pow(vetor.y, 2);
    return vetor;
}

int main(){
    vetor_t vetor, print;

    int num, i;
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        scanf("%f %f", &vetor.x, &vetor.y);
        print = calculaNorma(vetor);
        printf("Norma = %.1f\n", sqrt(print.norm));
    }
  return 0;
}
