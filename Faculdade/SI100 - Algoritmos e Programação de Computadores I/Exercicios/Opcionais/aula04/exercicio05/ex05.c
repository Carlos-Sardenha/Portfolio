#include <stdio.h>
#include <unistd.h> // Necessário para a função sleep

int main(){

    int num[10];
    int par = 0;
    int nao_par = 0;
    
    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) {
       scanf(" %d", &num[i]);
    }

    for(int i = 0; i < 10; i++){
        if(num[i] % 2 == 0){
            par += 1;
        }else{
            nao_par += 1;
        }
    }
    
    printf("Pares:%d \nImpares: %d", par, nao_par);
    
    return 0;   
}

