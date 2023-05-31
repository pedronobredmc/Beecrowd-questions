#include <stdio.h>

#define CONS(A, B)  ((A)/(B))

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.3f km/l\n", CONS(a, b));

}