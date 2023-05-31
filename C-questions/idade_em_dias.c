#include <stdio.h>

int main(){
    int a;
    int b, c, d;
    scanf("%d", &a);
    b=a/365;
    a=a-b*365;
    c=a/30;
    a=a-c*30;
    d=a;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", b, c, d);
    return 0;
}