#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct ponto{
    float x;
    float y;
    float r;
    float a;
}pontoz;
int main() {
    scanf("%f", &pontoz.r);
    scanf("%f", &pontoz.a);
    func();
    printf("%.1f\n", pontoz.x);
    printf("%.1f\n", pontoz.y);
}
void func(void){
    pontoz.x = pontoz.r*cos(pontoz.a);
    pontoz.y = pontoz.r*sin(pontoz.a);
}
