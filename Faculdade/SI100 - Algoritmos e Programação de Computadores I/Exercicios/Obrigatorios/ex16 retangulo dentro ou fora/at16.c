#include <stdio.h> 

int main(){

    int r1_x1, r1_y1, r1_x2, r1_y2;
    int r2_x1, r2_y1, r2_x2, r2_y2;

    scanf("%d %d", &r1_x1, &r1_y1);
    scanf("%d %d", &r1_x2, &r1_y2);

    scanf("%d %d", &r2_x1, &r2_y1);
    scanf("%d %d", &r2_x2, &r2_y2);

    if (r2_x1 >= r1_x1 && r2_y1 >= r1_y1 && r2_x2 <= r1_x2 && r2_y2 <= r1_y2){
        printf("o segundo retangulo esta contido no primeiro\n");
    }else{
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
}

