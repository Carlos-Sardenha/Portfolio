#include <stdio.h>

/* 
    instruções pra fazer o jogo

   Definindo os naipes do baralho:
   O - Ouros
   P - Paus
   C - Copas
   E - Espadas
   
   Definindo os especiais do baralho:
   1 - As
   11 - valete
   12 - Damas 
   13 - Reis

   Copas ( C ) = 1 ponto
   Dama espadas ( E-12 ) = 13 pontos
   13 Copas ( C ) + Dama espadas ( E-12 ) = 0 pontos, demais recebem 26 pontos 
*/

int main() {
    
    int quantidadeDeCartasJogadorUm = 0;
    int quantidadeDeCartasJogadorDois = 0;
    int quantidadeDeCartasJogadorTres = 0;
    int quantidadeDeCartasJogadorQuatro = 0;

    int pontuacaoJogadorUm = 0;
    int pontuacaoJogadorDois = 0; 
    int pontuacaoJogadorTres = 0;
    int pontuacaoJogadorQuatro = 0;
    
    //operadores for
    int especiais = 0;
    char naipe = 0;

    //for (i = 0; i < 0; i++){
        scanf("%d %d %d %d", &quantidadeDeCartasJogadorUm, &quantidadeDeCartasJogadorDois, &quantidadeDeCartasJogadorTres, &quantidadeDeCartasJogadorQuatro);

        // leitura jogador 1 e soma dos pontos

        for (int i = 0; i < quantidadeDeCartasJogadorUm; i++) {
            int especiais[];
            int naipe[];
            scanf("%d-%c", &especiais, &naipe);
            
            int quantidadeJogadorUmdeCopas = 0;
            //operadores for
            int especiais = 0;
            char naipe = 0;

            if(especiais == 1 || especiais == 11 || especiais == 12 || especiais == 13 ) {
                pontuacaoJogadorUm = pontuacaoJogadorUm + 1;
                quantidadeJogadorUmdeCopas = quantidadeJogadorUmdeCopas + 1;
            }
            if(naipe == 12) {
                pontuacaoJogadorUm = pontuacaoJogadorUm + 13;
            }
            if(naipe == 12 && quantidadeJogadorUmdeCopas == 13) {
                pontuacaoJogadorDois = pontuacaoJogadorDois + 26;
                pontuacaoJogadorTres = pontuacaoJogadorTres + 26;
                pontuacaoJogadorQuatro = pontuacaoJogadorQuatro + 26;
            }
        }
    //}
printf("%d", pontuacaoJogadorUm);
    return 0; 
}