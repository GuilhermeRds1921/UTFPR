#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int recursao(int n1, int n2){
    if(n1==n2){
        return n1;
    }
    if(n1<n2){
        return recursao(n2, n1);
    }
    else{
        return recursao(n1-n2, n2);
    }
}
int main() {
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("%d",recursao(n1, n2));
    return 0;
}
