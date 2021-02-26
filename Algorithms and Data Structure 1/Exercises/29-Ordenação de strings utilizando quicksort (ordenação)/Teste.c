#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Comparar (const void * nome1, const void * nome2 ) {
    const char *pnome1 = *(const char**)nome1;
    const char *pnome2 = *(const char**)nome2;

    return strcmp(pnome1,pnome2);
}

int main() {
    int i=0, num;
    scanf("%d", &num);
    char *Vetor[num];
    char nome[20];

    for(i=0; i<num; i++){
        scanf("%s", &nome);
        fflush(stdin);
        Vetor[i] = malloc(strlen(nome) + 1);

        strcpy(Vetor[i], nome);
    }

    int stringLen = sizeof(Vetor) / sizeof(char *);
    qsort(Vetor, stringLen, sizeof(char *), Comparar); //QuickSort

   for(i=0; i<num; i++){
       printf("%s\n", Vetor[i]);
   }

    return 0;
}
