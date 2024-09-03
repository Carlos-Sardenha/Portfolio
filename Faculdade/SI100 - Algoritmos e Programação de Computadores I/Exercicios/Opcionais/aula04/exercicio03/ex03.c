#include <stdio.h>
#include <unistd.h> // Necessário para a função sleep

int main(){

    int vetor[224]; 
    int start = 32; 

    
    for(int i = 0; i < 224; i++) {
        vetor[i] = start + i;
    }
    
    for(int i = 0; i < 224; i++) {
        printf("%c\n", vetor[i]);
    }
    
    for(int i = 0; i < 224; i++) {
        printf("%d\n", i);
    }
    
    for(int i = 0; i < 224; i++) {
        printf("%X\n", i);
    }
    
    return 0;   
}

