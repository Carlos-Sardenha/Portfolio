#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

void encontrarMaiorPalavra(char matriz[][MAX_LENGTH], int numLinhas) {
    char maiorPalavra[MAX_LENGTH];
    int i;

    // Inicializar com a primeira palavra
    strcpy(maiorPalavra, matriz[0]);

    // Encontrar a maior palavra
    for (i = 1; i < numLinhas; i++) {
        if (strlen(matriz[i]) > strlen(maiorPalavra)) {
            strcpy(maiorPalavra, matriz[i]);
        }
    }

    // Imprimir a maior palavra
    printf("A maior palavra é: %s\n", maiorPalavra);
}

int main() {
    char matriz[MAX_WORDS][MAX_LENGTH];
    int numLinhas, i;

    // Ler a matriz de entrada
    printf("Digite o número de linhas: ");
    scanf("%d", &numLinhas);

    printf("Digite as palavras:\n");
    for (i = 0; i < numLinhas; i++) {
        scanf("%s", matriz[i]);
    }

    // Chamar o procedimento para encontrar a maior palavra
    encontrarMaiorPalavra(matriz, numLinhas);

    return 0;
}
