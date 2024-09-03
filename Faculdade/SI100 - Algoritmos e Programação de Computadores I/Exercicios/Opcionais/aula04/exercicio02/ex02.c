#include <stdio.h>
#include <unistd.h> // Necessário para a função sleep

int main(){

    char caracter = 'a';
    
    while(caracter != '#'){
        printf("Escreva um caracter\n");
        scanf(" %c", &caracter);
        printf("Código ASICC é: %d\n", caracter);
    }
    return 0;
}
