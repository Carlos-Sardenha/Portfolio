#include <stdio.h>
#include <string.h>

int main(){
    struct Corpo {
        float altura;
        float peso;
        char nome[50]; // Supondo que o nome tenha no máximo 50 caracteres
    };

    struct Corpo usuario;

    scanf("%f", &usuario.altura);

    scanf("%f", &usuario.peso);

    scanf("%s", usuario.nome);

    float imc = usuario.peso / (usuario.altura * usuario.altura);

    printf("%.3f\n", imc);
    
    return 0;
}