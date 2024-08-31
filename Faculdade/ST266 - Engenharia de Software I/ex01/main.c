#include <stdio.h>

int main() {
    char nomes_pessoas[20][100];
    float peso;
    float altura;
    float IMC;
    int tamanho_do_grupo;

    int indice_fatter = -1;
    int indice_skinner = -1;
    float fatter = -1;
    float skinner = 999;

    printf("Tamanho do grupo?\n");
    scanf("%d", &tamanho_do_grupo);

    // Verifica se o tamanho do grupo é válido
    if (tamanho_do_grupo <= 0 || tamanho_do_grupo > 20) {
        printf("Tamanho do grupo inválido. Deve ser entre 1 e 20.\n");
        return 1;
    }

    for (int i = 0; i < tamanho_do_grupo; i++) {
        printf("Nome?\n");
        scanf("%s", nomes_pessoas[i]);

        // Coleta peso e altura
        printf("Peso?\n");
        scanf("%f", &peso);
        printf("Altura?\n");
        scanf("%f", &altura);

        IMC = peso / (altura * altura);

        if (IMC < 18.5) {
            printf("Abaixo do peso\n");
        } else if (IMC >= 18.5 && IMC <= 24.9) {
            printf("Peso Normal\n");
        } else if (IMC >= 25 && IMC <= 29.9) {
            printf("Sobrepeso\n");
        } else if (IMC >= 30 && IMC <= 34.9) {
            printf("Obesidade I\n");
        } else if (IMC >= 35 && IMC <= 39.9) {
            printf("Obesidade II\n");
        } else if (IMC >= 40) {
            printf("Obesidade III\n");
        }

        printf("IMC: %.2f\n", IMC);

        // Atualiza índices e valores de fatter e skinner
        if (IMC > fatter) {
            fatter = IMC;
            indice_fatter = i;
        }

        if (IMC < skinner) {
            skinner = IMC;
            indice_skinner = i;
        }
    }

    if (indice_fatter >= 0) {
        printf("Mais gordo: %s com IMC: %.2f\n", nomes_pessoas[indice_fatter], fatter);
    } else {
        printf("Nenhuma informação de IMC disponível para mais gordo.\n");
    }

    if (indice_skinner >= 0) {
        printf("Mais magro: %s com IMC: %.2f\n", nomes_pessoas[indice_skinner], skinner);
    } else {
        printf("Nenhuma informação de IMC disponível para mais magro.\n");
    }

    return 0;
}
