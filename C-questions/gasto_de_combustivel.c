#include <stdio.h>

#define GAS(A, B) ((A)*(B)/12)

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.3f\n", GAS(a, b));
    return 0;

}