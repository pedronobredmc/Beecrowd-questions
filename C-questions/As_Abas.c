#include <stdio.h>
#include <string.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    for(int i=0; i<b; i++){
        char c[7];
        scanf("%s", c);
        if(!strcmp(c, "fechou")){
            a+=1;
        }else{
            a-=1;
        }
    }
    printf("%d\n", a);
    return 0;
}