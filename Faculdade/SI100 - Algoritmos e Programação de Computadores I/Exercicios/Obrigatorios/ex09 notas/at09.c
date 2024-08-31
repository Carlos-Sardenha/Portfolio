#include <stdio.h>

/*
ler numeros entre
*/

float notas[20];
float desejo = 0;
int contadorA = 0;
int contadorB = 0;
int coringa = 0;
int i = 0;

int main() {

    for(i = 0; i < 20; i++){
        scanf("%f", &notas[i]);
    }
    
    int nuncaParar = 0;
    while(nuncaParar == 0){//encontrar numero
        scanf("%f", &desejo);
        
        if(desejo < 0){
            nuncaParar++;
        }

        for(i = 0; i < 20; i++){
            if(notas[i] == desejo) {
                coringa++;
                break;
            } 
        }

        if(desejo < 0){
            nuncaParar++;
        }else if(coringa == 1){
            printf("existe\n");
        }else{
            printf("nao existe\n");
        }

            coringa = 0;
    }



return 0;
}