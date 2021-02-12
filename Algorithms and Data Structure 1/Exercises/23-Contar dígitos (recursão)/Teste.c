#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define Max 100
int recursao(int n1, int n2){
   if ( n2 == 0 ){
       return 0;
   }
    else{
        return recursao( n1, n2 / 10 ) + ( n2 % 10 == n1 );
    }
}

int main() {
    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("%d", recursao(n1, n2));
    return 0;
}
