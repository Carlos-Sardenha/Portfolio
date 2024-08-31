#include <stdio.h>

void cubo(int A[], int B[]) {
    for (int i = 0; i < 10; i++) {
        B[i] = A[i] * A[i] * A[i];
    }
}

int main(){
    
    int A[10];
    int B[10];

    for(int i = 0; i < 10; i++){
        scanf("%d\n", &A[i]);
    }

    cubo(A, B);

    for(int i = 0; i < 10; i++){
        printf("%d\n", B[i]);
    }

    return 0;
}