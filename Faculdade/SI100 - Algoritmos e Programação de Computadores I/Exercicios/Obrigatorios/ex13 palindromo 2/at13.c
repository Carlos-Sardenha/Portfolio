#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int palindromo = 1;
    char palavra[100];
    scanf("%s", palavra);
    
    int tamanho = strlen(palavra);

    for(int i = 0; i < tamanho; i++){
        palavra[i] = tolower(palavra[i]);
    }
    
    for(int i = 0; i < tamanho / 2; i++){
        if (palavra[i] != palavra[tamanho - i - 1]) {
            palindromo = 0;
            break;
        }
    }

    if(palindromo){
        printf("Esta palavra e um palindromo\n");
    }else{
        printf("Esta palavra nao e um palindromo\n");
    }

    return 0;
}