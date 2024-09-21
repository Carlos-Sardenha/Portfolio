#include <stdio.h>

/* 
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

    int quantidadeJogadorUm = 0;
    int quantidadeJogadorDois = 0;
    int quantidadeJogadorTres = 0;
    int quantidadeJogadorQuatro = 0;

    int pontuacaoJogadorUm = 0;
    int pontuacaoJogadorDois = 0; 
    int pontuacaoJogadorTres = 0;
    int pontuacaoJogadorQuatro = 0;

    for (i = 0; i < 0; i++){
        scanf("%d %d %d %d", &quantidadeJogadorUm, &quantidadeJogadorDois, &quantidadeJogadorTres, &quantidadeJogadorQuatro);

        // leitura jogador 1 e soma dos pontos
          int especiais = 0;
          char naipe = 0;
          int quantidadeJogadorUmdeCopas = 0;
          while (scanf("%d-%c", &especiais, &naipe) quantidadeJogadorUm) {

            if(especiais == 1 || especiais == 11 || especiais == 12 || especiais == 13 ) {
                pontuacaoJogadorUm = pontuacaoJogadorUm + 1;
            }
            
            if(naipe == 12) {
                pontuacaoJogadorUm = pontuacaoJogadorUm + 13;
            }
            
            if(naipe == 12 && quantidadeJogadorUmdeCopas == 13) {
                pontuacaoJogadorDois = pontuacaoJogadorDois + 26;
                pontuacaoJogadorTres = pontuacaoJogadorTres + 26;
                pontuacaoJogadorQuatro = pontuacaoJogadorQuatro + 26;
            }

            quantidadeJogadorUmdeCopas = quantidadeJogadorUmdeCopas + 1;
        }
    }

    return 0; 
}