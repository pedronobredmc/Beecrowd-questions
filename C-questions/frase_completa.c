#include <stdio.h>
#include <string.h>

#define SIZE 1000


int main(){
    int n;
    char a[SIZE];
    int cont=0, cont2=0;
    char letras[] = "abcdefghijklmnopqrstuvxzwy";
    scanf(" %d", &n);

    for(int i=0; i<n; i++){
        scanf(" %[^\n]", a);
        for(int j=0; j<26; j++){
            for(int k=0; k<strlen(a); k++){
                if(a[k] == letras[j]){
                    if(cont>0){
                        a[k]=' ';
                    }
                    cont++;
                }
            }
            cont=0;
        }

        for(int l=0; l<26; l++){
            for(int e=0; e<strlen(a); e++){
                if(a[e] == letras[l]){
                    cont2++;
                }
            }
        }


        if(cont2>=26){
            printf("frase completa\n");
        }else if(cont2>=13 && cont2<26){
            printf("frase quase completa\n");
        }else{
            printf("frase mal elaborada\n");
        }
        cont2=0;
    }
}