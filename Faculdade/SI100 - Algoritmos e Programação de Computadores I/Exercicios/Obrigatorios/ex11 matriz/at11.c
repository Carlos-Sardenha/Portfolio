    #include <stdio.h> 

    #define NUM_LIN 20
    #define NUM_COL 20

    int main(){
        int matriz[NUM_LIN][NUM_COL];
        int transpor[NUM_COL][NUM_LIN];
        int numlinhas, numcolunas;
        int i = 0;
        int j = 0;

        scanf("%d %d", &numlinhas, &numcolunas);//receber quantidade que vai ser trabalhado

       
        for(i = 0; i < numlinhas; i++){//guardar numeros nos vetores
            for(j = 0; j < numcolunas; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        for(i = 0; i < numcolunas; i++){//formula para transpor
            for(j = 0; j < numlinhas; j++){
                transpor[i][j] = matriz[j][i];
            }
        }

        for(i = 0; i < numcolunas; i++){//printar
            for(j = 0; j < numlinhas; j++){
                printf("%d ", transpor[i][j]);
            }
            printf("\n");
        }
        
    return 0;
}
