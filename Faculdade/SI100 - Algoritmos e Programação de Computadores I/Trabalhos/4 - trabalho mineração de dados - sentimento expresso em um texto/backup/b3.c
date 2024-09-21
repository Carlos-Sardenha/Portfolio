#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//--> Decidir e imprimir polaridade
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

//--> Contar palavras
void leitura_palavras_paragrafos(char paragrafo[][3000], char palavra[][21], int numero_paragrafos, char positivas_separadas[][21], char negativas_separadas[][21], int *positivas_count, int *negativas_count)
{
    int num_palavras = 0;

    for (int i = 0; i < numero_paragrafos; i++)
    {
        int pos_palavra = 0;
        int pos_caractere = 0;

        while (paragrafo[i][pos_caractere] != '\0')
        {
            if (paragrafo[i][pos_caractere] == ' ' || paragrafo[i][pos_caractere] == '.' || paragrafo[i][pos_caractere] == '\n')
            {
                palavra[num_palavras][pos_palavra] = '\0';
                num_palavras++;
                pos_palavra = 0;
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
                (*positivas_count)++;
                break;
            }
        }

        for (int k = 0; negativas_separadas[k][0] != '\0'; k++)
        {
            if (strcmp(palavra[j], negativas_separadas[k]) == 0)
            {
                (*negativas_count)++;
                break;
            }
        }
    }

    imprimir_polaridade(*positivas_count, *negativas_count);
}

//--> Contar quantidade palavras positivas e negativas
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


/*void respota_questao_dois(int pergunta, int paragrafo)
{
    if (paragrafo > 9)
    {
        printf("ERROR");
    }
}

/*void respota_questao_tres(){

}

void respota_questao_quatro(){

}*/

int main()
{
    int numero_paragrafos;//--> Numero de paragrafos
    char palavras_positivas[1000];//--> Recolher palavras positivas
    char palavras_negativas[1000];//--> Recolher palavras negativas
    int num_questoes;//--> Numero de questoes totais
    int questoes[4][1] = {0};//--> Guardar questoes a serem respondidas
    int questao_dois_paragrafo[4][1] = {0};//--> Se for a questao dois, guarda os paragrafos a serem respondidos

    char paragrafos[10][3000];//--> Recolher paragrafos
    char frases[200][1400];//--> NAO USANDO AINDA
    char palavras[1400][21];//--> Todas as palavras do texto
    char positivas_separadas[1400][21];//--> Separa cada palavra em um vetor
    char negativas_separadas[1400][21];//--> Separa cada palavra em um vetor
    int positivas_count = 0;//--> Quantidade palavras positivas
    int negativas_count = 0;//--> Quantidade palavras positivas

    printf("Digite a quantidade de parágrafos: ");//--> Recolhe os dados
    scanf("%d", &numero_paragrafos);
    getchar();//--> Come o espaço extra

    printf("Digite o texto (cada parágrafo em uma linha, pressione Enter para finalizar cada parágrafo):\n");
    for (int i = 0; i < numero_paragrafos; i++)//--> Recolhe os paragrafos e separa na matriz
    {
        fgets(paragrafos[i], 2000, stdin);
    }

    printf("Digite a lista de palavras positivas separadas por espaços: ");
    fgets(palavras_positivas, 1000, stdin);//--> Recolhe palavras positivas

    printf("Digite a lista de palavras negativas separadas por espaços: ");
    fgets(palavras_negativas, 1000, stdin);//--> Recolhe palavras negativas

    printf("Digite a quantidade de questões: ");
    scanf("%d", &num_questoes);//--> Recolhe quantidade de questoes
    getchar();//--> Come o espaço extra

    printf("Digite as questões (uma por linha):\n");
    for (int i = 0; i < num_questoes; i++)//--> Recolhe questoes a serem respondidas
    {
        printf("Digite o paragrafo:\n");
        scanf("%d", &questoes[i][0]);  
        if (questoes[i][0] == 2)
        {
            scanf("%d", &questao_dois_paragrafo[i][0]); //--> Se for a questao 2, recolhe o paragrafo a ser respondido
        }
    }

    leitura_palavras_positivas_negativas(palavras_positivas, palavras_negativas, positivas_separadas, negativas_separadas);

    // --> Questão 1
    if (questoes[0][0] > 0)
    {
        if (questoes[0][0] == 1)
        {
            leitura_palavras_paragrafos(paragrafos, palavras, 1, positivas_separadas, negativas_separadas, &positivas_count, &negativas_count);
        }
        // Especificar paragrafo e alterar numero de paragrafos para 1 --> Questão 2
        else if (questoes[0][0] == 2)
        {
            //respota_questao_dois(questoes[0][0], questao_dois_paragrafo[0][0]);
        }
        else if (questoes[0][0] == 3)
        {
            // void respota_questao_tres()
        }
        else if (questoes[0][0] == 4)
        {
            // void resposta_questao_quatro()
        }
        else
        {
            printf("ERROR - Pergunta invalida");
        }
    }
    // leitura_palavras_paragrafos(paragrafos[/*paragrafo desejado com alguma variavel*/], palavras, 1, positivas_separadas, negativas_separadas, &positivas_count, &negativas_count);

    printf("\n\nFIM");

    return 0;
}
