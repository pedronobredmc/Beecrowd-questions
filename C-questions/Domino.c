#include <stdio.h>

#define DUPLON(n) ((((n)+1)*((n)+2))/2)

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", DUPLON(n));
    return 0;
}