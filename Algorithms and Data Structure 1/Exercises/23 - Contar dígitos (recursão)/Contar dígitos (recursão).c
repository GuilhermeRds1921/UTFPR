#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define Max 100
int recursao(int n1, int n2){
    int cout;
   if ( n2 == 0 ){
       return 0;
   }
    else{
        if(n2 % 10 == n1){
            cout = recursao( n1, n2 / 10 ) + 1 ;
        }
        else{
            cout = recursao( n1, n2 / 10 );
        }
        return cout;
    }
}

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);
    printf("%d", recursao(n1, n2));
    return 0;
}
