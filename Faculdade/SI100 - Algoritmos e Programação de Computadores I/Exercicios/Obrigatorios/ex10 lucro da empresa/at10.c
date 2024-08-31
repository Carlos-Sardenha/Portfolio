#include <stdio.h>

/*
ler numeros entre
*/

int UmDoisValor[10];// 1º Vetor
int DoisValor[10];// 2º Vetor
int i = 0;

int main() {

    for(i = 0; i < 10; i++){//ler quantidade
        scanf("%d", &UmDoisValor[i]);//guardar quantidade
    }
    
    for(i = 0; i < 10; i++){//ler DoisValores
        scanf("%d", &DoisValor[i]);//guardar DoisValor
    }

    for(i = 0; i < 10; i++){//fazer intercalação
        printf("%d|%d|", UmDoisValor[i], DoisValor[i]);
    }
    printf("\n");

return 0;
}