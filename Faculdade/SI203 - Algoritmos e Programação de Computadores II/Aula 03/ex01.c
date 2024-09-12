#include <stdio.h>

#define TAM 5  // Não deve ter ponto e vírgula

// Definição da struct band
struct band {
    char nome[50];    // Array de caracteres para armazenar o nome
    char genero[30];  // Array de caracteres para o gênero musical
    int integrantes;
    int instagram;
    int ouvintes;
};

// Declaração do array de bandas
struct band bab[TAM];

int main() {
    // Laço para inserir os dados de cada banda
    for (int i = 0; i < TAM; i++) {
        printf("Digite o nome da banda %d: ", i + 1);
        scanf("%s", bab[i].nome);  // Ler a string para o nome da banda
        getchar();
            
        printf("Digite o gênero da banda %d: ", i + 1);
        scanf("%s", bab[i].genero);  // Ler o gênero musical
        getchar();
            
        printf("Digite o número de integrantes da banda %d: ", i + 1);
        scanf("%d", &bab[i].integrantes);
        getchar();
            
        printf("Digite o número de seguidores no Instagram da banda %d: ", i + 1);
        scanf("%d", &bab[i].instagram);
        getchar();
            
        printf("Digite o número de ouvintes mensais da banda %d: ", i + 1);
        scanf("%d", &bab[i].ouvintes);
        getchar();
            
        printf("\n");  // Pula linha entre as entradas
    }

    /*
    for (int i = 0; i < TAM; i++) {
        printf("Banda %d: %s\n", i + 1, bab[i].nome);
        printf("Gênero: %s\n", bab[i].genero);
        printf("Integrantes: %d\n", bab[i].integrantes);
        printf("Seguidores no Instagram: %d\n", bab[i].instagram);
        printf("Ouvintes mensais: %d\n\n", bab[i].ouvintes);
    }*/

    for(

    return 0;
}
