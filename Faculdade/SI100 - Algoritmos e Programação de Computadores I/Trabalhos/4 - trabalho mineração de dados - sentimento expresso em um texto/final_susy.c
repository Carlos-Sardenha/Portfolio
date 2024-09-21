#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir_polaridade(int positivas_count, int negativas_count) {
    if (positivas_count - negativas_count > 3 || (positivas_count > 0 && negativas_count == 0)) {
        printf("%d Palavras positivas, %d Palavras negativas: Polaridade Positiva\n", positivas_count, negativas_count);
    } else if (negativas_count - positivas_count > 3 || (negativas_count > 0 && positivas_count == 0)) {
        printf("%d Palavras positivas, %d Palavras negativas: Polaridade Negativa\n", positivas_count, negativas_count);
    } else {
        printf("%d Palavras positivas, %d Palavras negativas: Polaridade Neutra\n", positivas_count, negativas_count);
    }
}

void leitura_palavras_paragrafos(char paragrafo[][3000], int numero_paragrafos, char positivas_separadas[][21], char negativas_separadas[][21], int *positivas_count, int *negativas_count) {
    char palavra[21];
    int num_palavras = 0, pos_palavra = 0;

    for (int i = 0; i < numero_paragrafos; i++) {
        for (int j = 0; paragrafo[i][j] != '\0'; j++) {
            if (strchr(" .,\n?;", paragrafo[i][j])) {
                if (pos_palavra > 0) {
                    palavra[pos_palavra] = '\0';
                    for (int k = 0; positivas_separadas[k][0] != '\0'; k++) {
                        if (strcmp(palavra, positivas_separadas[k]) == 0) {
                            (*positivas_count)++;
                            break;
                        }
                    }
                    for (int k = 0; negativas_separadas[k][0] != '\0'; k++) {
                        if (strcmp(palavra, negativas_separadas[k]) == 0) {
                            (*negativas_count)++;
                            break;
                        }
                    }
                    pos_palavra = 0;
                }
            } else {
                palavra[pos_palavra++] = paragrafo[i][j];
            }
        }
    }

    imprimir_polaridade(*positivas_count, *negativas_count);
}

int leitura_sentencas(char paragrafo[][3000], char frase[][1400], int numero_paragrafos, int maior) {
    int num_sentencas = 0, pos_sentenca = 0;

    for (int i = 0; i < numero_paragrafos; i++) {
        for (int j = 0; paragrafo[i][j] != '\0'; j++) {
            if (strchr(".\n?", paragrafo[i][j])) {
                frase[num_sentencas][pos_sentenca] = '\0';
                num_sentencas++;
                pos_sentenca = 0;
            } else if (!(paragrafo[i][j] == ' ' && strchr(".\n?", paragrafo[i][j - 1]))) {
                frase[num_sentencas][pos_sentenca++] = paragrafo[i][j];
            }
        }
    }

    int num_sentenca_escolhida = 0;
    size_t tamanho_escolhido = strlen(frase[0]);

    for (int i = 1; i < num_sentencas; i++) {
        size_t tamanho_atual = strlen(frase[i]);
        if ((maior && tamanho_atual > tamanho_escolhido) || (!maior && tamanho_atual < tamanho_escolhido && tamanho_atual > 0)) {
            tamanho_escolhido = tamanho_atual;
            num_sentenca_escolhida = i;
        }
    }

    return num_sentenca_escolhida;
}

void leitura_palavras(char *entrada, char palavras_separadas[][21]) {
    int num_palavras = 0, pos_palavra = 0;

    for (int i = 0; entrada[i] != '\0'; i++) {
        if (entrada[i] == ' ' || entrada[i] == '\n') {
            palavras_separadas[num_palavras][pos_palavra] = '\0';
            num_palavras++;
            pos_palavra = 0;
        } else {
            palavras_separadas[num_palavras][pos_palavra++] = entrada[i];
        }
    }
}

    char palavras_positivas[1000], palavras_negativas[1000];
    int questoes[100][2];
    char paragrafos[10][3000], frases[200][1400];
    char positivas_separadas[1400][21] = {0}, negativas_separadas[1400][21] = {0};
    
int main() {
    int numero_paragrafos, num_questoes;

    scanf("%d", &numero_paragrafos);
    getchar();

    for (int i = 0; i < numero_paragrafos; i++) {
        fgets(paragrafos[i], 3000, stdin);
    }

    fgets(palavras_positivas, 1000, stdin);
    fgets(palavras_negativas, 1000, stdin);

    scanf("%d", &num_questoes);
    getchar();

    for (int i = 0; i < num_questoes; i++) {
        scanf("%d", &questoes[i][0]);
        if (questoes[i][0] == 2) {
            scanf("%d", &questoes[i][1]);
        }
    }

    leitura_palavras(palavras_positivas, positivas_separadas);
    leitura_palavras(palavras_negativas, negativas_separadas);

    for (int i = 0; i < num_questoes; i++) {
        int positivas_count = 0, negativas_count = 0;

        if (questoes[i][0] == 1) {
            leitura_palavras_paragrafos(paragrafos, numero_paragrafos, positivas_separadas, negativas_separadas, &positivas_count, &negativas_count);
        } else if (questoes[i][0] == 2) {
            char paragrafo_selecionado[1][3000];
            strcpy(paragrafo_selecionado[0], paragrafos[questoes[i][1]]);
            leitura_palavras_paragrafos(paragrafo_selecionado, 1, positivas_separadas, negativas_separadas, &positivas_count, &negativas_count);
        } else if (questoes[i][0] == 3 || questoes[i][0] == 4) {
            int maior = questoes[i][0] == 3;
            int num_sentenca = leitura_sentencas(paragrafos, frases, numero_paragrafos, maior);
            char sentenca_selecionada[1][3000];
            strcpy(sentenca_selecionada[0], frases[num_sentenca]);
            leitura_palavras_paragrafos(sentenca_selecionada, 1, positivas_separadas, negativas_separadas, &positivas_count, &negativas_count);
        }
    }

    return 0;
}
