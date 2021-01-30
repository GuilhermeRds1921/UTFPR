#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, par=0, impar=0;
    scanf("%d", &num);

    int *P = (int *)calloc(num, sizeof(int));

    for(int i=0; i<num; i++){
        scanf("%d", &P[i]);
        if(*(P+i)%2==0){
            par++;
        }
         else if(*(P+i)%2!=0){
            impar++;
        }
    }
    printf("Pares: %d\nImpares: %d", par, impar);
    return 0;
}
