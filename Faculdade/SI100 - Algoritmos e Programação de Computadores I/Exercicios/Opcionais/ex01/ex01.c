#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    float umNumero, doisNumero;
    char operador;
    float resposta;

    scanf("%f %c %f", &umNumero, &operador, &doisNumero);
    //printf("%f%c%f", umNumero, operador, doisNumero);

    if(operador == '+'){
        resposta = umNumero + doisNumero;       
    }else if( operador == '-'){
        resposta = umNumero - doisNumero;
    }else if( operador == '/'){
        resposta = umNumero / doisNumero;
    }else if( operador == '*'){
        resposta = umNumero * doisNumero;
    }else{
        printf("ERROR");
    }

    printf("%f %c %f = %f", umNumero, operador, doisNumero , resposta);

    return 0;
}