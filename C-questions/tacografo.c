#include <stdio.h>

#define DIST(A, B)  ((A)*(B));

int main(){
    int n, t, v;
    int dist = 0;
    scanf("%d", &n);
    
    for(int i = 0; i<n; i++){
        scanf("%d %d", &t, &v);
        dist = dist + DIST(t, v);
    }

    printf("%d\n", dist);
}