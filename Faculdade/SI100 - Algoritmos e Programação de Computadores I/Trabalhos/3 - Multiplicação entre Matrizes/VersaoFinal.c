    #include <stdio.h> 

    #define NUM_LIN 20
    #define NUM_COL 20

    int main(){
        int matriz[NUM_LIN][NUM_COL];
        int matriz2[NUM_LIN][NUM_COL];
        int soma[NUM_LIN][NUM_COL];
        int numlinhas, numcolunas, numlinhas2, numcolunas2;
        int i = 0;
        int j = 0;
        int k = 0;


        printf("digite matriz 1");
        scanf("%d %d", &numlinhas, &numcolunas);//receber quantidade que vai ser trabalhado
       
        for(i = 0; i < numlinhas; i++){//guardar numeros nos vetores
            for(j = 0; j < numcolunas; j++){
                scanf("%d", &matriz[i][j]);
            }
        }


        printf("digite matriz 2");
        scanf("%d %d", &numlinhas2, &numcolunas2);//receber quantidade que vai ser trabalhado
       
        for(i = 0; i < numlinhas2; i++){//guardar numeros nos vetores
            for(j = 0; j < numcolunas2; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        if (numcolunas != numlinhas2) {
                printf("As dimensões das matrizes não permitem a multiplicação.\n");
                return 1;
            }

        for(i = 0; i < numlinhas; i++){
            for(j = 0; j < numcolunas; j++){
                
            }
        }


        for(i = 0; i < numcolunas; i++){//printar
            for(j = 0; j < numlinhas; j++){
                printf("%d ", soma[i][j]);
            }
            printf("\n");
        }
        
    return 0;
}
