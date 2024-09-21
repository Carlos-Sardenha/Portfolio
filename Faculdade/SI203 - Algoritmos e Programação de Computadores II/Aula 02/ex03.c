#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    float num1, num2, resultado;
    char operador[20];

    printf("Digite a operação (ex: 3 soma 5): ");
    scanf("%f %s %f", &num1, operador, &num2);

    if (strcmp(operador, "soma") == 0) {
        resultado = num1 + num2;
    } else if (strcmp(operador, "subtrai") == 0) {
        resultado = num1 - num2;
    } else if (strcmp(operador, "multiplica") == 0) {
        resultado = num1 * num2;
    } else if (strcmp(operador, "divide") == 0) {
        if(num2 != 0) { 
            resultado = num1 / num2;
        } else {
            printf("Erro: divisão por zero.\n");
            return 1;
        }
    } else if (strcmp(operador, "eleva") == 0) {
        resultado = pow(num1, num2);
    } else {
        printf("Operador não reconhecido.\n");
        return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
