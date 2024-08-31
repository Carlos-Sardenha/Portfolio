#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir_polaridade(int positivas_count, int negativas_count)
{
    if (positivas_count - negativas_count > 3)
    {
        printf("%d Palavras positivas, %d Palavras negativas: Polaridade Positiva\n", positivas_count, negativas_count);
    }
    else if (positivas_count > 0 && negativas_count == 0)
    {
        printf("%d Palavras positivas, %d Palavras negativas: Polaridade Positiva\n", positivas_count, negativas_count);
    }
    else if (negativas_count - positivas_count > 3)
    {
        printf("%d Palavras positivas, %d Palavras negativas: Polaridade Negativa\n", positivas_count, negativas_count);
    }
    else if (negativas_count > 0 && positivas_count == 0)
    {
        printf("%d Palavras positivas, %d Palavras negativas: Polaridade Negativa\n", positivas_count, negativas_count);
    }
    else
    {
        printf("%d Palavras positivas, %d Palavras negativas: Polaridade Neutra\n", positivas_count, negativas_count);
    }
}

void leitura_palavras_paragrafos(char paragrafo[][3000], char palavra[][21], int numero_paragrafos, char positivas_separadas[][21], char negativas_separadas[][21], int *positivas_count, int *negativas_count)
{
    int num_palavras = 0;

    for (int i = 0; i < numero_paragrafos; i++)
    {
        int pos_palavra = 0;
        int pos_caractere = 0;

        while (paragrafo[i][pos_caractere] != '\0')
        {
            if (paragrafo[i][pos_caractere] == ' ' || paragrafo[i][pos_caractere] == '.' || paragrafo[i][pos_caractere] == '\n' || paragrafo[i][pos_caractere] == ',' || paragrafo[i][pos_caractere] == '?' || paragrafo[i][pos_caractere] == ';') // Ascrescentei
            {
                if (pos_palavra > 0) // ACRESCENTEI
                {
                    palavra[num_palavras][pos_palavra] = '\0';
                    num_palavras++;
                    pos_palavra = 0;
                }
            }
            else
            {
                palavra[num_palavras][pos_palavra] = paragrafo[i][pos_caractere];
                pos_palavra++;
            }
            pos_caractere++;
        }
    }

    for (int j = 0; j < num_palavras; j++)
    {
        for (int k = 0; positivas_separadas[k][0] != '\0'; k++)
        {
            if (strcmp(palavra[j], positivas_separadas[k]) == 0)
            {
                *positivas_count += 1;
                break;
            }
        }

        for (int k = 0; negativas_separadas[k][0] != '\0'; k++)
        {
            if (strcmp(palavra[j], negativas_separadas[k]) == 0)
            {
                *negativas_count += 1;
                break;
            }
        }
    }

    imprimir_polaridade(*positivas_count, *negativas_count);
}

int leitura_sentencas_maior(char paragrafo[][3000], char frase[][1400], int numero_paragrafos)
{
    int num_sentencass = 0;

    for (int i = 0; i < numero_paragrafos; i++)
    {
        int pos_sentenca = 0;
        int pos_caractere = 0;

        while (paragrafo[i][pos_caractere] != '\0')
        {
            if (paragrafo[i][pos_caractere] == '.' || paragrafo[i][pos_caractere] == '\n' || paragrafo[i][pos_caractere] == '?') // Acrescentei ?? 
            {
                frase[num_sentencass][pos_sentenca] = '\0';
                num_sentencass++;
                pos_sentenca = 0;
            }
            else
            {
                if (paragrafo[i][pos_caractere] == ' ' && (paragrafo[i][pos_caractere - 1] == '.' || paragrafo[i][pos_caractere - 1] == '\n' || paragrafo[i][pos_caractere - 1] == '?')) // Acrescentei 
                {
                }
                else
                {
                    frase[num_sentencass][pos_sentenca] = paragrafo[i][pos_caractere];
                    pos_sentenca++;
                }
            }
            pos_caractere++;
        }
    }

    int numero_da_maior_sentenca = 0;
    size_t Quant_Caracteres = strlen(frase[0]);

    for (int i = 1; i < num_sentencass; i++)
    {
        if (strlen(frase[i]) > Quant_Caracteres)
        {
            Quant_Caracteres = strlen(frase[i]);
            numero_da_maior_sentenca = i;
        }
    }

    frase[numero_da_maior_sentenca][Quant_Caracteres] = '\n';

    return numero_da_maior_sentenca;
}

int leitura_sentencas_menor(char paragrafo[][3000], char frase[][1400], int numero_paragrafos)
{
    int num_sentencass = 0;

    for (int i = 0; i < numero_paragrafos; i++)
    {
        int pos_sentenca = 0;
        int pos_caractere = 0;

        while (paragrafo[i][pos_caractere] != '\0')
        {
            if (paragrafo[i][pos_caractere] == '.' || paragrafo[i][pos_caractere] == '\n' || paragrafo[i][pos_caractere] == '?') // Acrescentei ?
            {
                frase[num_sentencass][pos_sentenca] = '\0';
                num_sentencass++;
                pos_sentenca = 0;
            }
            else
            {
                if (paragrafo[i][pos_caractere] == ' ' && (paragrafo[i][pos_caractere - 1] == '.' || paragrafo[i][pos_caractere - 1] == '\n' || paragrafo[i][pos_caractere - 1] == '?')) // Acrescentei if inteiro 
                {
                }
                else
                {
                    frase[num_sentencass][pos_sentenca] = paragrafo[i][pos_caractere];
                    pos_sentenca++;
                }
            }
            pos_caractere++;
        }
    }

    int numero_da_menor_sentenca = 0;
    size_t Quant_Caracteres = strlen(frase[0]);
    for (int i = 1; i < num_sentencass; i++)
    {
        if (strlen(frase[i]) < Quant_Caracteres && strlen(frase[i]) > 0) // Acrescentei   
        {
            Quant_Caracteres = strlen(frase[i]);
            numero_da_menor_sentenca = i;
        }
    }

    frase[numero_da_menor_sentenca][Quant_Caracteres] = '\n';

    return numero_da_menor_sentenca;
}

void leitura_palavras_positivas_negativas(char positivas[], char negativas[], char positivas_separadas[][21], char negativas_separadas[][21])
{
    int num_palavras = 0;
    int pos_palavra = 0;
    int pos_caractere = 0;

    while (positivas[pos_caractere] != '\0')
    {
        if (positivas[pos_caractere] == ' ' || positivas[pos_caractere] == '\n')
        {
            positivas_separadas[num_palavras][pos_palavra] = '\0';
            num_palavras++;
            pos_palavra = 0;
        }
        else
        {
            positivas_separadas[num_palavras][pos_palavra] = positivas[pos_caractere];
            pos_palavra++;
        }
        pos_caractere++;
    }

    num_palavras = 0;
    pos_palavra = 0;
    pos_caractere = 0;

    while (negativas[pos_caractere] != '\0')
    {
        if (negativas[pos_caractere] == ' ' || negativas[pos_caractere] == '\n')
        {
            negativas_separadas[num_palavras][pos_palavra] = '\0';
            num_palavras++;
            pos_palavra = 0;
        }
        else
        {
            negativas_separadas[num_palavras][pos_palavra] = negativas[pos_caractere];
            pos_palavra++;
        }
        pos_caractere++;
    }
}

    int numero_paragrafos;
    char palavras_positivas[1000];
    char palavras_negativas[1000];
    int num_questoes;
    int questoes[100][2]; // Mudei para dois ao inves de 1

    char paragrafos[10][3000];
    char frases[200][1400];

int main()
{

    char palavras[1400][21];
    char positivas_separadas[1400][21];
    char negativas_separadas[1400][21];

    scanf("%d", &numero_paragrafos);
    getchar();

    for (int i = 0; i < numero_paragrafos; i++)
    {
        fgets(paragrafos[i], 2000, stdin);
    }

    fgets(palavras_positivas, 1000, stdin);

    fgets(palavras_negativas, 1000, stdin);

    scanf("%d", &num_questoes);
    getchar();

    for (int i = 0; i < num_questoes; i++)
    {
        scanf("%d", &questoes[i][0]);
        if (questoes[i][0] == 2)
        {
            scanf("%d", &questoes[i][1]);
        }
    }

    leitura_palavras_positivas_negativas(palavras_positivas, palavras_negativas, positivas_separadas, negativas_separadas);

    for (int i = 0; i < num_questoes; i++)
    {
        int positivas_count = 0; // Movido para dentro do for
        int negativas_count = 0; // Movido para dentro do for

        if (questoes[i][0] == 1)
            leitura_palavras_paragrafos(paragrafos, palavras, numero_paragrafos, positivas_separadas, negativas_separadas, &positivas_count, &negativas_count);
        else if (questoes[i][0] == 2)
        {
            char paragrafo_selecionado[1][3000];
            strcpy(paragrafo_selecionado[0], paragrafos[(questoes[i][1])]); // Tirei o "- 1"
            leitura_palavras_paragrafos(paragrafo_selecionado, palavras, 1, positivas_separadas, negativas_separadas, &positivas_count, &negativas_count);
        }
        else if (questoes[i][0] == 3)
        {
            int numero_da_sentenca = leitura_sentencas_maior(paragrafos, frases, numero_paragrafos);
            char sentenca_maior[1][3000];
            strcpy(sentenca_maior[0], frases[numero_da_sentenca]);
            leitura_palavras_paragrafos(sentenca_maior, palavras, 1, positivas_separadas, negativas_separadas, &positivas_count, &negativas_count);
        }
        else if (questoes[i][0] == 4)
        {
            int numero_da_sentenca = leitura_sentencas_menor(paragrafos, frases, numero_paragrafos);
            char sentenca_menor[1][3000];
            strcpy(sentenca_menor[0], frases[numero_da_sentenca]);
            leitura_palavras_paragrafos(sentenca_menor, palavras, 1, positivas_separadas, negativas_separadas, &positivas_count, &negativas_count);
        }
    }

    return 0;
}
