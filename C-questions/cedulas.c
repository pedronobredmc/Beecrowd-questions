#include <stdio.h>

int main(){
    int a, aux;
    int n100, n50, n20, n10, n5, n2, n1;
    scanf("%d", &a);
    n1=0;
    n2=0;
    n5=0;
    n10=0;
    n20=0;
    n50=0;
    n100=0;
    aux=a;
    while(a!=0){
        if((a/100)!=0){
        n100=a/100;
        a=a-n100*100;
        }else if((a/50)!=0){
        n50=a/50;
        a=a-n50*50;
    }else if((a/20)!=0){
        n20=a/20;
        a=a-n20*20;
    }else if((a/10)!=0){
        n10=a/10;
        a=a-n10*10;
    }else if((a/5)!=0){
        n5=a/5;
        a=a-n5*5;
    }else if((a/2)!=0){
        n2=a/2;
        a=a-n2*2;
    }else if((a/1)!=0){
        n1=a/1;
        a=a-n1*1;
    }
    }   
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", aux, n100, n50, n20, n10, n5, n2, n1);
}