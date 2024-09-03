#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    float umNumero, doisNumero;
    char operador;
    float resposta;
    int valido = 1;

    scanf("%f %c %f", &umNumero, &operador, &doisNumero);
    //printf("%f%c%f", umNumero, operador, doisNumero);

    switch (operador) {
    case '+':
        resposta = umNumero + doisNumero;
        break;
    case '-':
        resposta = umNumero - doisNumero;
        break;
    case '/':
        if (doisNumero == 0) {
                printf("Erro: Divisão por zero.\n");
                valido = 0; // Indica que a operação não é válida
            } else {
                resposta = umNumero / doisNumero;
            }
        break;
    case '*':
        resposta = umNumero * doisNumero;
        break;
    default:
        printf("ERROR");
    }
    
    if(valido = 1){
        printf("%.2f %c %.2f = %.2f", umNumero, operador, doisNumero , resposta);
    }
    return 0;
}
