#include <stdio.h> 
#include <math.h>

int main(){

    float x1 = 0;
    float x2 = 0;
    float y1 = 0;
    float y2 = 0;
    float distancia = 0;

    scanf("%f %f", &x1, &x2);

    scanf("%f %f", &y1, &y2);

    if(x1 == y1 && x2 == y2){
        printf("os pontos sao iguais\n");
    }else{
        printf("os pontos nao sao iguais\n");
    }

    return 0;
}