#include <stdio.h>

int main(){
    double a;
    int n100, n50, n20, n10, n5, n2, n1, m05, m025, m01, m005, m001;
    scanf("%lf", &a);
    n1=0;
    n2=0;
    n5=0;
    n10=0;
    n20=0;
    n50=0;
    n100=0;
    m05=0;
    m025=0;
    m01=0;
    m005=0;
    m001=0;

        if((a/100)!=0){
        n100=a/100;
        a=a-n100*100;
        } if((a/50)!=0){
            n50=a/50;
            a=a-n50*50;
        } if((a/20)!=0){
            n20=a/20;
            a=a-n20*20;
        } if((a/10)!=0){
            n10=a/10;
            a=a-n10*10;
        } if((a/5)!=0){
            n5=a/5;
            a=a-n5*5;
        } if((a/2)!=0){
            n2=a/2;
            a=a-n2*2;
        } if((a/1)!=0){
            n1=a/1;
            a=a-n1*1;
        } if((a/0.5)!=0){
            m05=a/0.5;
            a=a-m05*0.5;
        } if((a/0.25)!=0){
            m025=a/0.25;
            a=a-m025*0.25;
        } if((a/0.1)!=0){
            m01=a/0.1;
            a=a-m01*0.1;
        } if((a/0.05)!=0){
            m005=a/0.05;
            a=a-m005*0.05;
        }
        m001=a/0.01;
    
                
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",n100, n50, n20, n10, n5, n2, n1, m05, m025, m01, m005, m001);
}