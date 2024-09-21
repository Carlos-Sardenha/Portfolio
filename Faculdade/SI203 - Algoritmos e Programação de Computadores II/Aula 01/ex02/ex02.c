/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    float montante;
    int tempo = 22;
    float taxa = 0.0581;
    float total;
    
    printf("Digite o valor");
    scanf("%f", &montante);
    
    
    total = montante * (pow((1 + taxa), tempo)); 
    
    printf("%f", total);
}