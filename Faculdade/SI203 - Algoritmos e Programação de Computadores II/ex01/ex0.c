#include <stdio.h>

int main()
{
    int cum;
    int cdois;
    int ctres;
    
    printf("Escreva Distancia Cachoeira 1\n");
    scanf("%d", &cum);
    
    printf("Escreva Distancia Cachoeira 2\n");
    scanf("%d", &cdois);
    
    printf("Escreva Distancia Cachoeira 3\n");
    scanf("%d", &ctres);
    
    if(cum < cdois && cum < ctres){
        printf("Cachoeira 1 mais próxima\n");
    }
    
    if(cdois < cum && cdois < ctres){
        printf("Cachoeira 2 mais próxima\n");
    }
    
    if(ctres < cum && ctres < cdois){
        printf("Cachoeira 3 mais próxima\n");
    }
    
    //_____________________________
    
    if(cum > cdois && cum > ctres){
        printf("Cachoeira 1 mais longe\n");
    }
    
    if(cdois > cum && cdois > ctres){
        printf("Cachoeira 2 mais longe\n");
    }
    
    if(ctres > cum && ctres > cdois){
        printf("Cachoeira 3 mais longe\n");
    }

    
}