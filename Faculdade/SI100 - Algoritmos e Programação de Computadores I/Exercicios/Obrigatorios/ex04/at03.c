#include <stdio.h>

int main() {
    float n1, n2;
    float resultadoSoma, resultadoSubtracao, resultadoDivisao, resultadoMultiplicacao;
    char operador;

    scanf("%f%c%f", &n1, &operador, &n2);
    
    //teste
    printf("n1 é: %.3f\nn2 é: %.3f \n\n", n1, n2);

    //execucao da conta
    if(operador == '+') {
        resultadoSoma = n1 + n2;
    }
    if(operador == '-') {
        resultadoSubtracao = n1 - n2;
    }
    if(operador == '/') {
        resultadoDivisao = n1/n2;
    }
    if(operador == '*') {
        resultadoMultiplicacao = n1*n2;
    }

    //teste 2
    printf("resultado soma: %f \nresultado subtracao: %f \nresultado divisao: %f \nresultado multiplicacao: %f \n\n", resultadoSoma, resultadoSubtracao, resultadoDivisao, resultadoMultiplicacao);

    //resultado da soma
    if(operador == '+') {
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultadoSoma);
    }
    //resultado subtracao
    else if(operador == '-') {
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultadoSubtracao);
    }
    //resultado divisao
    else if(operador == '/') {
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultadoDivisao);
    }
    //resultado multiplicacao
    else if(operador == '*') {
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultadoMultiplicacao);
    }
    //resultado operador invalido
    else{
        printf("Operador invalido\n");
    }
    return 0;
}