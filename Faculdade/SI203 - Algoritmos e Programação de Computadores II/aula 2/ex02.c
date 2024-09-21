#include <stdio.h>
#include <string.h>

int main (){
    char nome[100]; 
    int erro = 0;
    int k = 3;  

    printf("Escreva o K: \n");
    scanf("%d", &k);

    getchar(); 

    printf("Escreva o texto: \n");
    fgets(nome, sizeof(nome), stdin);   
    int length = strlen(nome);  
    
    if (nome[length - 1] == '\n') { 
        nome[length - 1] = '\0';
        length--;
    }


    for (int i = 0; i < length; i++) {  
        if(nome[i] >= 'a' && nome[i] <= 'z'){
            nome[i] = nome[i] - 32;
        }
    }

    
    for (int i = 0; i < length; i++) {
        if (nome[i] < 'A' || nome[i] > 'Z'){
            erro = 1;  
            break;
        } else if (nome[i] + k > 'Z') {  
            nome[i] = nome[i] + k - 26;
        } else {
            nome[i] += k;
        }
    }

    
    if(erro == 1){
        printf("ERROU\n");
    } else {
        printf("Texto cifrado: %s\n", nome);
    }

    return 0;
}
