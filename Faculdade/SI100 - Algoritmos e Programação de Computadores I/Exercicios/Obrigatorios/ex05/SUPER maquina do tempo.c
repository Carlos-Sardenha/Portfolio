#include <stdio.h>
#include <unistd.h>

int main(){

int n1;

int segundo;
int minuto;
int hora;

scanf("%d", &hora);
scanf("%d", &minuto);
scanf("%d", &segundo);

    for (n1 = 0; n1 <= 86400; n1++){
        printf("%d/%d/%d\n",hora, minuto, segundo);
        sleep(1);

        segundo = segundo + 1;

        if(segundo >= 60){
            segundo = 0;
            minuto = minuto + 1;
        }

        if(minuto >= 60){
            minuto = 0;
            hora = hora + 1;
        }
        if(hora >= 24){
            hora = 0;
            minuto = 0;
            hora = 0;
        }
    }
    return 0;
}