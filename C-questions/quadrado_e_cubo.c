#include <stdio.h>
int main() {
 
    int n;
    int z=1;
    int aux=1;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        printf("%d", z);
        for(int j=1; j<3; j++){
            z=z*aux;
            printf(" %d", z);
        }
        printf("\n");
        z=aux;
        z=z+1;
        aux=z;
    }
    return 0;
}