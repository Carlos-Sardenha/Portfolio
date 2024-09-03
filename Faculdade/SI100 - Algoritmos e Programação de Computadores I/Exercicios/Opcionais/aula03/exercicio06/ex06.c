#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int situacao;
    float notas[3], exame;
    float media;
    
    for(int i = 0; i < 3; i++){
        printf("Digite a nota da %d de 0 a 10\n", i + 1);
        scanf("%f", &notas[i]);
        if(notas[i] > 10 || notas[i] < 0){
            printf("nota deve ser de 0 a 10 - ERROR");
            return 1;
        }
        printf("\n");
    }

    media = (notas[0] + notas[1] + notas[2])/3;
    
    printf("Sua media ficou %f\n", media);
    
    if(media > 5.99){
        printf("APROVADO\n");
        situacao = 1;
    }else if(media < 1.99){
        printf("REPROVADO\n");
        situacao = 2;
    }else{
        printf("EXAME\n");
        situacao = 3;
        printf("Digite a nota do Exame\n");
        scanf("%f", &exame);
        media = (media + exame)/2;   
        printf("Sua media ficou %f\n", media);
        if(media > 5.99){
            printf("APROVADO\n");
        }else{
            printf("REPROVADO\n");
        }
    }
    
    return 0;
}
