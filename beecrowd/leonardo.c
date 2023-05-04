#include <stdio.h>

#define RESTO(a, b)  ((a) % (b))
 
int main() {
 
    int p, n;
    scanf("%d %d", &n, &p);
    int r = RESTO(n, p);
    printf("%d\n", r);
 
    return 0;
}