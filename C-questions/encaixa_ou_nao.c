#include <stdio.h>
#include <string.h>
int main(){
    int n;
    char c[100];
    char b[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s %s", c, b);
        int cont=0;
        int a = strlen(c);
        int d = strlen(b);
        for(int i=a-d; i<d; i++){
            for(int j=0; j<a; j++){
                if(c[i]==b[j]){
                    cont++;
                }
            }
        }
        if(cont==d){
            printf("encaixa\n");
        }else{
            printf("nao encaixa\n");
        }
    }
    return 0;
}