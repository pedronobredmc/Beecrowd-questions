#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char a[5];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", a);
        if(a[3]!='\0'){
            printf("3\n");
        }else if(a[0]=='o' && a[1]=='n' || a[0]=='o' && a[2]=='e' || a[1]=='n' && a[2]=='e'){
            printf("1\n");
        }else{
            printf("2\n");
        }
    }
    return 0;
}