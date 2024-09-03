#include <stdio.h>
#include <unistd.h> // Necessário para a função sleep

int main(){

    int num[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

    for(int i = 0; i < 20; i++){
        int resultado = num[i] * num[i];
        printf("%d\n", resultado);    
        sleep(1);
    }   
    
    return 0;
}
