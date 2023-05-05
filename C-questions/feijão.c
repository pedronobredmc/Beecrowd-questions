#include <stdio.h>


int main(){
    for(int i = 1; i<5; i++){
        int aux;
        scanf("%d", &aux);
        if(aux == 1){
            printf("%d\n", i);
            break;
        }
    }
}