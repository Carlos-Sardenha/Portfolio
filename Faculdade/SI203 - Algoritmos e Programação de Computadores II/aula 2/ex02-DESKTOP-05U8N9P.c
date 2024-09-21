#include <stdio.h>
#include <string.h>

int main (){
    char nome[100]; 
    int erro = 0;
    int k = 3;

    printf("Escreva o texto: \n");
    fgets(nome, sizeof(nome), stdin);   //get nome
    int length = strlen(nome);  //get tamanho
    
    if (nome[length - 1] == '\n') { //tirar espaço
        nome[length - 1] = '\0';
        length--;
    }
/*
    for (int i = 0; i < length; i++) {
        nome[i] = nome[i] - 32;
    }
*/
        for (int i = 0; i < length; i++) {
            if (nome[i] < 'A' || nome[i] > 'Z'){
                erro = 1;
            }else if(nome[i] < 87){
                nome[i] += (k - 23);
            }else{
                nome[i] += k;
            }
        }

    if(erro == 1){
        printf("ERROU");
    }else{
        for(int i= 0; i < length; i++){
            printf("%c", nome[i]);
        }
    }

    return 0;
}