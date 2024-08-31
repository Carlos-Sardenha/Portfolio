#include <stdio.h>
/*
O - Ouros
P - Paus
C - Copas
E - Espadas
        
1 - As
11 - valete
12 - Damas 
13 - Reis
*/

        int A, B, C, D; //numero de cartas
        int contA = 0, contB = 0, contC = 0, contD = 0; //contador de quantidade de cartas por linha
        int pontA = 0, pontB = 0, pontC = 0, pontD = 0; //pontuacao dos jogadores
        char vencedor; //letra vencedora
        char perdedor; //letra derrotada
        int coringa;

        int main () {
    
        while (pontA < 100 && pontB < 100 && pontC < 100 && pontD < 100) { //loop ate os 100 pontos
            
            contA = 0;
            contB = 0;
            contC = 0;
            contD = 0;//reset do numero de cartas (acho que nao e necessario mas nao custa nada)

            
            scanf("%d %d %d %d", &A, &B, &C, &D); //coleta da quantidade de cartas
            
            coringa = 0;//resetar coringa
            while(contA < A) {//loop de acordo com a quantidade de cartas na mao do jogador

                char naipe;
                int num;//operadores

                scanf("%d-%c", &num, &naipe);

                if(naipe == 'C'){
                    pontA = pontA + 1;
                    coringa = coringa + 1;
                }
                if(num == 12 && naipe == 'E') {
                    pontA = pontA + 13;
                    coringa = coringa + 1;
                }
                if(coringa == 14) { // ativo SE houver 13 cartas de copas ( 13 C ) e tambem tiver 1 carta de espadas ( 1 12-E ), total 14 cartas
                    pontA = pontA - 26;
                    pontB = pontB + 26;
                    pontC = pontC + 26;
                    pontD = pontD + 26;
                    coringa = 0;
                }
                contA = contA + 1;
            }

            coringa = 0;// resetar coringa
            while(contB < B) {//loop de acordo com a quantidade de cartas na mao do jogador
                char naipe;
                int num; 
                scanf("%d-%c", &num, &naipe);

                if(naipe == 'C'){
                    pontB = pontB + 1;
                    coringa = coringa + 1;
                }
                if(num == 12 && naipe == 'E') {
                    pontB = pontB + 13;
                    coringa = coringa + 1;;
                }
                if(coringa == 14) {
                    pontB = pontB - 26;
                    pontA = pontA + 26;
                    pontC = pontC + 26;
                    pontD = pontD + 26;
                    coringa = 0;
                    }
                contB = contB + 1;
                }
                
            coringa = 0;// resetar coringa

            while(contC < C) {
                char naipe;
                int num; 
                scanf("%d-%c", &num, &naipe);

                if(naipe == 'C'){
                    pontC = pontC + 1;
                    coringa = coringa + 1;
                }
                if(num == 12 && naipe == 'E') {
                    pontC = pontC + 13;
                    coringa = coringa + 1;
                }
                if(coringa == 14) {
                    pontC = pontC - 26;
                    pontA = pontA + 26;
                    pontB = pontB + 26;
                    pontD = pontD + 26;
                    coringa = 0;
                }
                contC = contC + 1;
                }        

            coringa = 0;// resetar coringa 

            while(contD < D) {
                char naipe;
                int num; 
                scanf("%d-%c", &num, &naipe);   

                if(naipe == 'C'){
                    pontD = pontD + 1;
                    coringa = coringa + 1;
                }
                if(num == 12 && naipe == 'E') {
                    pontD = pontD + 13;
                    coringa = coringa + 1;
                }
                if(coringa == 14) {
                    pontD = pontD - 26;
                    pontA = pontA + 26;
                    pontB = pontB + 26;
                    pontC = pontC + 26;
                    coringa = 0;
                }
                contD = contD + 1;
                }   

                printf("A: %d B: %d C: %d D: %d\n", pontA, pontB, pontC, pontD);
        }

        //vencedor
        if(pontA < pontB && pontA < pontC && pontA < pontD){
            vencedor = 'A';
        }else if(pontB < pontA && pontB < pontC && pontB < pontD) {
            vencedor = 'B';
        }else if(pontC < pontA && pontC < pontB && pontC < pontD ) {
            vencedor ='C';
        }else if(pontD < pontA && pontD < pontB && pontD < pontC){
            vencedor = 'D';
        }

        //perdedor
        if(pontA > pontB && pontA > pontC && pontA > pontD){
            perdedor = 'A';
        }else if(pontB > pontA && pontB > pontC && pontB > pontD) {
            perdedor = 'B';
        }else if(pontC > pontA && pontC > pontB && pontC > pontD ) {
            perdedor ='C';
        }else if(pontD > pontA && pontD > pontB && pontD > pontC) {
            perdedor = 'D';
        }

        printf("Vencedor: jogador %c; Ultimo Lugar: jogador %c\n", vencedor, perdedor);

        return 0;
        }