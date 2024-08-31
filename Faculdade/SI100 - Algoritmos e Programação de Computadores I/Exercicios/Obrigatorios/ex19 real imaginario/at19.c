#include <stdio.h>

void soma(double *real_z, double *imag_z, double real_w, double imag_w) {

    *real_z = *real_z + real_w;
    *imag_z = *imag_z + imag_w;
}

void multiplica(double *real_z, double *imag_z, double real_w, double imag_w) {

    double real_temp = *real_z * real_w - *imag_z * imag_w;
    double imag_temp = *real_z * imag_w + *imag_z * real_w;
    *real_z = real_temp;
    *imag_z = imag_temp;
}

int main() {

    double real_z, imag_z, real_w, imag_w;
    char auxiliar;

    if (scanf("%lf %lf %c %lf %lf", &real_z, &imag_z, &auxiliar, &real_w, &imag_w) != 5) {
        printf("Entrada inválida\n");
        return 1;
    }


    if (auxiliar == '+') {
        soma(&real_z, &imag_z, real_w, imag_w);
    } else if (auxiliar == '*') {
        multiplica(&real_z, &imag_z, real_w, imag_w);
    } else {
        printf("Operação inválida\n");
        return 1;
    }


    printf("%.0lf + %.0lfi\n", real_z, imag_z);
    
    return 0;
}
