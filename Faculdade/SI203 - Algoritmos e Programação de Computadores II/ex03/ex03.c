/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    char gabarito[10] = {'E', 'B', 'C', 'A', 'B', 'D', 'E', 'D', 'A', 'B'};
    char resposta[10];
    int nota = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Resposta %dº\n", i);
        scanf(" %c", &resposta[i]);
    }
    
    for(int i = 0; i < 10; i++){
        if(resposta[i] == gabarito[i]){
            nota += 1;
        }
    }
    printf("%d", nota);

return 0;
}