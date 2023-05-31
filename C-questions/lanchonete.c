#include <stdio.h>

int main(){
    int b;
    double a, total;
    scanf("%lf %d", &a, &b);
    if(a==1){
        total=b*4.0;
    }else if(a==2){
        total=b*4.50;
    }else if(a==3){
        total=b*5.0;
    }else if(a==4){
        total=b*2.0;
    }else{
        total=b*1.50;
    }
    printf("Total: R$ %.2lf\n", total);
    return 0;
}