#include <stdio.h>

#define NUM_CONTATOS 1

struct contatos {
    int ddd;
    int num;
    char nome[50];
};

int main() {

    int search_ddd;

    struct contatos pessoas[NUM_CONTATOS];

    for (int i = 0; i < NUM_CONTATOS; i++) {
        printf("Digite o DDD: ");
        scanf("%d", &pessoas[i].ddd);
        
        printf("Digite o Numero: ");
        scanf("%d", &pessoas[i].num);
        
        printf("Digite o Nome: ");
        scanf("%49s", pessoas[i].nome); // Limita a entrada a 49 caracteres
    }

    /*
    printf("\nContatos:\n");
    for (int i = 0; i < NUM_CONTATOS; i++) {
        printf("DDD: %d, Numero: %d, Nome: %s\n", pessoas[i].ddd, pessoas[i].num, pessoas[i].nome);
    }
    */

    printf("Digite o DDD que deseja buscar por:\n");
    scanf("%d", &search_ddd);

    //buscar por ddd

    printf("Contatos Encontrados\n");
    
    for(int i = 0; i < NUM_CONTATOS; i++){
            if(search_ddd == pessoas[i].ddd){
            printf("DDD: %d, Numero: %d, Nome: %s\n", pessoas[i].ddd, pessoas[i].num, pessoas[i].nome);
        }
    }

    return 0;
}
