#include <stdio.h>

//formula: n! / (p! * ((n - p)!))

//funcao pra calcular fatorial de um numero 
unsigned long long int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    //variaveis
    int n;
    int p;
    double resultado;

    //scan
    scanf("%d", &n);
    scanf("%d", &p);

    //verificao se conta e possivel
    if (p > n) {
            printf("Erro: O valor de s nao pode ser maior que n.\n");
            return 1;
        }  
    
    //realizacao conta
    resultado = (double)fatorial(n) / (fatorial(p) * fatorial(n - p));
            
    printf("%.0lf\n", resultado);

    return 0;
}