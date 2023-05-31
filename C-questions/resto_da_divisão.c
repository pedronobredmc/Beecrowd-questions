#include <stdio.h>
int main(){
    int a, b;
    int aux;
    scanf("%d %d", &a, &b);
    if(a>b){
        aux=b;
        b=a;
        a=aux;
    }
    for(int i=a+1; i<b; i++){
        if(i%5==2 || i%5==3){
            printf("%d\n", i);
        }
    }
    return 0;
}