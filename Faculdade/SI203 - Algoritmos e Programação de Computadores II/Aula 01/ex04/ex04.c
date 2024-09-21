#include <stdio.h>

int main() {
    int matriz[2][2];
    int maior = -1;

    printf("Digite os elementos da matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); 
        }
    }

    printf("Matriz digitada:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Encontrar maior num\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior é: %d", maior);
    return 0;
}
