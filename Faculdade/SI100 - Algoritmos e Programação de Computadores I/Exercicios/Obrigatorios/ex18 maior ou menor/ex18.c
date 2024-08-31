#include <stdio.h>

void maior(int vetor[], int tamanho){
    int maior = vetor[0];
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i]; 
        }
    }
    printf("maior valor: %d", maior);
}

void menor(int vetor[], int tamanho){
    int menor = vetor[0];
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] < menor){
            menor = vetor[i]; 
        }
    }
    printf("menor valor: %d", menor);
}

int main(){

    int tamanho;

    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    maior(vetor, tamanho);
    printf("\n");
    menor(vetor, tamanho);
    printf("\n");

}