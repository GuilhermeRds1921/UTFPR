#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int recursao(int n1, int n2){
    int r;
    if(n2 == 0 || n1 == 0 ){
        return 0;
    }
    else {
        r = n1 + recursao(n1, n2-1);
    }
    return r;
}
int main() {
    int n1, n2, result;
    scanf("%d", &n1);
    scanf("%d", &n2);

    result  = recursao(n1, n2);
    printf("%d", result);
    return 0;
}
