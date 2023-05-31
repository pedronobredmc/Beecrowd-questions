#include <stdio.h>

int main(){
    int linha, coluna;
    int aux=0, aux2=0;
    int count=0;
    scanf("%d %d", &linha, &coluna);
    int a[linha][coluna];
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=1; i<linha-1; i++){
        for(int j=1; j<coluna-1; j++){
            if(a[i][j]==42){
                if(a[i-1][j]==7 && a[i+1][j]==7 && a[i-1][j-1]==7 && a[i][j+1]==7 && 
                a[i-1][j+1]==7 && a[i+1][j-1]==7 && a[i+1][j+1]==7 && a[i][j-1]==7){
                    aux=i+1;
                    aux2=j+1;
                }
            }
        }
    }
    printf("%d %d\n", aux, aux2);
    return 0;
}