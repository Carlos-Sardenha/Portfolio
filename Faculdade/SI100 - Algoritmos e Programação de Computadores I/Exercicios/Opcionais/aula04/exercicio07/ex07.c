#include <stdio.h>
#include <unistd.h> // Necessário para a função sleep

/*
    1- 6p
    2- 4p / 2b
    3- 6b
    5- 4p /2b
    6- 6p
*/

void imprime_linha(int p, int b) {// ex 4p | 2b 
    for(int i = 0; i < p/2; i++){//2p
        printf("⚫");
    }
    for(int i = 0; i < b; i++){//2b
        printf("⚪");
    }
    for(int i = 0; i < p/2; i++){//2p
        printf("⚫");
    }
}

int main(){

    for(int i = 0; i < 6; i++){//imprimir linha 1
        printf("")
    }
}
