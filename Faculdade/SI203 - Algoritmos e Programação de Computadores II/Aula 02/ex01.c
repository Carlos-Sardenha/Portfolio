#include <stdio.h>
#include <string.h>

int main (){
    char nome[100]; 

    fgets(nome, sizeof(nome), stdin);  
    int length = strlen(nome);  
    if (nome[length - 1] == '\n') {
        nome[length - 1] = '\0';
        length--;
    }
        for (int i = 0, j = length - 1; i < j; i++, j--) {
        int temp = nome[i];//armazena inicio
        nome[i] = nome[j];//substitiu inicio por fim
        nome[j] = temp;//substitiu fim por temp
    }

    for(int i= 0; i < length; i++){
        printf("%c", nome[i]);
    }

    return 0;
}