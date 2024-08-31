#include <stdio.h>

int main () {

    int dia, mes, ano;

    int janeiro = 1;
    int fevereiro = 2;
    int marco = 3;
    int abril = 4;
    int maio = 5;
    int junho = 6;
    int julho = 7;
    int agosto = 8; 
    int setembro = 9;
    int outubro = 10;
    int novembro = 11;
    int dezembro = 12;

    scanf("%d/%d/%d", &dia, &mes, &ano);

        if (mes == 1){
            printf("%d de janeiro de %d\n", dia, ano);
        }
        else if (mes == 2){
            printf("%d de fevereiro de %d\n", dia, ano);
        } 
        else if (mes == 3){
            printf("%d de março de %d\n", dia, ano);
        }
        else if (mes == 4){
            printf("%d de abril de %d\n", dia, ano); 
        }
        else if (mes == 5){
            printf("%d de maio de %d\n", dia, ano);
        }
        else if (mes == 6){
            printf("%d de junho de %d\n", dia, ano);
        }
        else if (mes == 7){
            printf("%d de julho de %d\n", dia, ano);
        }
        else if (mes == 8){
            printf("%d de agosto de %d\n", dia, ano);
        }
        else if (mes == 9){
            printf("%d de setembro de %d\n", dia, ano);
        }
        else if (mes == 10){
            printf("%d de outubro de %d\n", dia, ano);
        }
        else if (mes == 11){
            printf("%d de novembro de %d\n", dia, ano);
        }
        else if (mes == 12){
            printf("%d de dezembro de %d\n", dia, ano);
        }else() {
            printf("Mes invalido\n");
        }
    return 0;
}