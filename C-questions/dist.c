#include <stdio.h>
 
#define DIST(A) ((A)*2) 
 
int main() {
 
    int n;
    scanf("%d", &n);
    printf("%d minutos\n", DIST(n));
 
    return 0;
}