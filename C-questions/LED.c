#include <stdio.h>
#include<string.h>

int main(){
    int n, leds=0;
    scanf("%d", &n);
    char c[1000000];
    for(int i=0; i<n; i++){
        scanf("%s", c);
        leds=0;
        for(int j=0; j<strlen(c); j++){
            if(c[j]=='1'){
                leds=leds+2;
            }else if(c[j]=='2'){
                leds=leds+5;
            }else if(c[j]=='3'){
                leds=leds+5;
            }else if(c[j]=='4'){
                leds=leds+4;
            }else if(c[j]=='5'){
                leds=leds+5;
            }else if(c[j]=='6'){
                leds=leds+6;
            }else if(c[j]=='7'){
                leds=leds+3;
            }else if(c[j]=='8'){
                leds=leds+7;
            }else if(c[j]=='9'){
                leds=leds+6;
            }else if(c[j]=='0'){
                leds=leds+6;
            }
        }
        printf("%d leds\n", leds);
        leds=0;
    }
    return 0;

}