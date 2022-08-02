#include <stdio.h>

int main(){
    int X[10];
    int a;
    scanf("%d", &a);
    X[0] = a;
    printf("X[0] = %d\n", X[0]);
    for(int i = 1; i < 10; i++){
        X[i] = 2*X[i-1];
        // printf("X[%d] = %d\n", i, X[i]);
    }
    return 0;
}