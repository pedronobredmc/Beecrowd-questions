#include <stdio.h>
 
#define GRAMAS(a, b, c, d, e)  (((a)*(300)) + ((b)*(1500)) + ((c)*(600)) + ((d)*(1000)) + ((e)*(150))) 
 
int main() {
 
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int comida = GRAMAS(a, b, c, d, e);
    printf("%d\n", (comida + 225));
 
    return 0;
}