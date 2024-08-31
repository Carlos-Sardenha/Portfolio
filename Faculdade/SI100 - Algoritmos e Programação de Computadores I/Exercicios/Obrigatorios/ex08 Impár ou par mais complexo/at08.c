#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int quantidadePar;
    int quantidadeImpar;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);   
    scanf("%d", &n4);
    scanf("%d", &n5);
    scanf("%d", &n6);
    scanf("%d", &n7);
    scanf("%d", &n8);
    scanf("%d", &n9);
    scanf("%d", &n10);

    int resto1 = n1%2;
    int resto2 = n2%2;
    int resto3 = n3%2;
    int resto4 = n4%2;
    int resto5 = n5%2;
    int resto6 = n6%2;
    int resto7 = n7%2;
    int resto8 = n8%2;
    int resto9 = n9%2;
    int resto10 = n10%2;

    if (resto1 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    if (resto2 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    if (resto3 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    if (resto4 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    if (resto5 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    if (resto6 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    if (resto7 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    if (resto8 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    if (resto9 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    if (resto10 == 0) {
        quantidadePar = quantidadePar + 1;
    } else {
        quantidadeImpar = quantidadeImpar + 1;
    }

    printf("%d pares, %d impares\n", quantidadePar, quantidadeImpar);

    return 0;
}