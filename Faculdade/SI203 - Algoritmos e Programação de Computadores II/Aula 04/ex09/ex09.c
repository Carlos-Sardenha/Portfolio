#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int* junta_vetores(int *v1, int n1, int *v2, int n2){
    
    int *c = (int *)malloc((n1 + n2) * sizeof(int)); 

    if (c == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1); 
    }

    
    for(int i = 0; i < n1; i++){
        c[i] = v1[i];
    }
    for(int i = 0; i < n2; i++){
        c[n1 + i] = v2[i];
    }
    
    return c;
}

int main(){
    
    int vetor1[5] = {3, 7, 1, 4, 9}; 
    int vetor2[5] = {2, 8, 5, 0, 10};
    
    int n1 = sizeof(vetor1) / sizeof(vetor1[0]);
    int n2 = sizeof(vetor2) / sizeof(vetor2[0]);
    
    int *resultado = junta_vetores(vetor1, n1, vetor2, n2);
    
    for(int i = 0; i < (n1 + n2);i++){
        
        printf(" %d |", resultado[i]);
    }
    
    free(resultado);
    
    return 0;
}