#include <stdio.h>


int main() {
    int numeroDigitado;  
    
    scanf("%d", &numeroDigitado);
    
    int resto = numeroDigitado%2;

    if (resto == 0) {
    printf("par\n");
    } 

    if (resto != 0) {
        printf("impar\n");
    }   

    return 0;
}