#include <stdio.h>

int main(){
    char palavra[80];
    int contador = 0;
    int espaco = 0;

    fgets(palavra, sizeof(palavra), stdin);

    while(palavra[contador] != '\0' && palavra[contador] != '\n'){
        if(palavra[contador] == ' '){
            espaco++;
        }
        contador++;
    }

    printf("%d", contador - espaco);
}