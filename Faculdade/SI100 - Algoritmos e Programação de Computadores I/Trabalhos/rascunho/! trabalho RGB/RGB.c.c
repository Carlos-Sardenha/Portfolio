#include <stdio.h>
#include <stdlib.h>
int coluna = 0;//x e y da matriz
int linha = 0;

int main(){
    int lixo;
    char lixo1;
    char situacao;
    int empatados[5] = {0, 0, 0, 0, 0};
    int maior = 0;
    int vezesa = 0;
    int vezesb = 0;
    int vezesc = 0;
    int vezesd = 0;
    int vezese = 0;

    scanf("%c%d %d %d %d", &lixo1, &lixo, &coluna, &linha, &lixo);//remocao do lixo, base esperada => ( P3 2 2 255 )
    
    if(coluna > 12 || linha > 12){
        return 0;
    }

    int matriz_preservada[12][36];

    char **matriz_um = (char **)malloc(linha * sizeof(char *));
    for (int i = 0; i < coluna; i++) {
        matriz_um[i] = (char *)malloc(coluna * sizeof(char));
    }

    int **matriz_dois = (int **)malloc(linha * sizeof(int *));
    for (int i = 0; i < linha; i++) {
        matriz_dois[i] = (int *)calloc(5, sizeof(int)); // a matriz com 0
    }

    int matriz_tres[5][3] = {
    {0, 0, 0},
    {255, 0, 0},
    {0, 255, 0},
    {0, 0, 255},
    {255, 255, 0}
};

//   0        1       2       3          4   
// 0 0 0, 255 0 0, 0 255 0, 0 0 255, 255 255 0
//matriz simplificada
    for(int i = 0; i < coluna; i++){//coluna
        for(int j = 0; j < linha; j++){//linha
            int r, g, b;
            scanf("%d", &r);

            matriz_preservada[i][j] = r;
        }
        getchar();
    }

    printf("\n");
    printf("\n");
    for (int i = 0; i < coluna; i++) {
        for (int j = 0; j < linha; j++) {
            printf("%d ", matriz_preservada[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

/*
    printf("Matriz final:\n");
    for(int i = 0; i < coluna; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz_dois[i][j]);
        }
        printf("\n");
    }
*/
    printf("\n");
    //transpor matriz simplificada
    for(int i = 0; i < coluna; i++) {
        for(int j = 0; j < linha; j++){
            if(matriz_um[i][j] == '1'){
                matriz_dois[i][0] += 1;
            }else if(matriz_um[i][j] == '2'){
                matriz_dois[i][1] += 1;
            }else if(matriz_um[i][j] == '3'){
                matriz_dois[i][2] += 1;
            }else if(matriz_um[i][j] == '4'){
                matriz_dois[i][3] += 1;
            }else if(matriz_um[i][j] == '5'){
                matriz_dois[i][4] += 1;
            }
        }
    }

    int pont[5] = {0};
    //somar colunas
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < linha; j++){
            if(matriz_dois[j][i] > 0){
                pont[i] += matriz_dois[j][i];
            }
        }
    }

    //vencedor
    if (pont[0] > pont[1] && pont[0] > pont[2] && pont[0] > pont[3] && pont[0] > pont[4]) {
        situacao = '1';
    } else if (pont[1] > pont[0] && pont[1] > pont[2] && pont[1] > pont[3] && pont[1] > pont[4]) {
        situacao = '2';
    } else if (pont[2] > pont[0] && pont[2] > pont[1] && pont[2] > pont[3] && pont[2] > pont[4]) {
        situacao = '3';
    } else if (pont[3] > pont[0] && pont[3] > pont[1] && pont[3] > pont[2] && pont[3] > pont[4]) {
        situacao = '4';
    } else if (pont[4] > pont[0] && pont[4] > pont[1] && pont[4] > pont[2] && pont[4] > pont[3]) {
        situacao = '5';
    } else {
        situacao = 'e';
        
        //descobrir o maior numero
        for (int i = 0; i < 5; i++) {
            if (pont[i] > maior) {
                maior = pont[i];
            }
        }

        //salvar quais foram as posicoes empatadas
        for (int i = 0; i < 5; i++) {
            if(pont[i] == maior){
                empatados[i] = 1;
            }else if(pont[i] != maior){
                empatados[i] = 0;
            }
        }
        }

//   0        1       2       3          4   
// 0 0 0, 255 0 0, 0 255 0, 0 0 255, 255 255 0
//Em caso de empates, mantenha as cores majoritarias inalteradas e mude apenas as cores minoritarias para 255 255 255.
    if(situacao =='e'){
        for(int i = 0; i < linha; i++) {

            for(int i = 0; i < coluna; i++) {
                    if(empatados[0] == 0){
                        printf("255 255 255 ");
                    }else if(empatados[0] == 1){
                        printf("0 0 0 ");
                    }
            }

            for(int i = 0; i < coluna; i++) {
                    if(empatados[1] == 0){
                        printf("255 255 255 ");
                    }else if(empatados[1]== 1){
                        printf("255 0 0 ");
                    }
            }

            for(int i = 0; i < coluna; i++) {
                    if(empatados[2] == 0){
                        printf("255 255 255 ");
                    }else if(empatados[2]== 1){
                        printf("0 255 0 ");
                    }
            }

            for(int i = 0; i < coluna; i++) {
                    if(empatados[3] == 0){
                        printf("255 255 255 ");
                    }else if(empatados[3]== 1){
                        printf("0 0 255 ");
                    }
            }

            for(int i = 0; i < coluna; i++) {
                    if(empatados[4] == 0){
                        printf("255 255 255 ");
                    }else if(empatados[4]== 1){
                        printf("255 255 0 ");
                    }
            }   

        printf("\n");
    }
}else if(situacao == '1'){
        for(int i = 0; i < coluna; i++) {
            for(int j = 0; j < linha; j++){
                if(matriz_um[i][j] == '1'){
                    printf("0 0 0 ");
                }else if(matriz_um[i][j] == '2'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '3'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '4'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '5'){
                    printf("255 255 255 ");
                }else{
                    printf("ERROR");
                }
        }
        printf("\n");
        }
    }else if(situacao == '2'){
        for(int i = 0; i < coluna; i++) {
            for(int j = 0; j < linha; j++){
                if(matriz_um[i][j] == '1'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '2'){
                    printf("0 0 0 ");
                }else if(matriz_um[i][j] == '3'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '4'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '5'){
                    printf("255 255 255 ");
                }else{
                    printf("ERROR");
                }
        }
        printf("\n");
        }
    }else if(situacao == '3'){
        for(int i = 0; i < coluna; i++) {
            for(int j = 0; j < linha; j++){
                if(matriz_um[i][j] == '1'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '2'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '3'){
                    printf("0 0 0 ");
                }else if(matriz_um[i][j] == '4'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '5'){
                    printf("255 255 255 ");
                }else{
                    printf("ERROR");
                }
        }
        printf("\n");
        }
    }else if(situacao == '4'){
        for(int i = 0; i < coluna; i++) {
            for(int j = 0; j < linha; j++){
                if(matriz_um[i][j] == '1'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '2'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '3'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '4'){
                    printf("0 0 0 ");
                }else if(matriz_um[i][j] == '5'){
                    printf("255 255 255 ");
                }else{
                    printf("ERROR");
                }
        }
        printf("\n");
        }
    }else if(situacao == '5'){
        for(int i = 0; i < coluna; i++) {
            for(int j = 0; j < linha; j++){
                if(matriz_um[i][j] == '1'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '2'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '3'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '4'){
                    printf("255 255 255 ");
                }else if(matriz_um[i][j] == '5'){
                    printf("0 0 0 ");
                }else{
                    printf("ERROR");
                }
        }
        printf("\n");
        }
    }
    
return 0;

}