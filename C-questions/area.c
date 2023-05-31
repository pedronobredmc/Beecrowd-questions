#include <stdio.h>

#define PI 3.141519

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", a*c/2, PI*c*c, ((a+b)*c)/2, b*b, a*b);
    return 0;
}