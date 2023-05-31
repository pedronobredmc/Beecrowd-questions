#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    //-b +- raiz(b²-4ac)/2a
    double r1 = ((-b + sqrt(pow(b, 2)-4*a*c))/(2*a));
    double r2 = ((-b - sqrt(pow(b, 2)-4*a*c))/(2*a));

    if(a==0 || (pow(b, 2)-4*a*c)<0){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }
    return 0;
}