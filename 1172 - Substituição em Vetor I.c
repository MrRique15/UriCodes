#include <stdio.h>

int main(){
    int X[10];
    int a;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a);
        if(a <= 0){
            a = 1;
        }
        X[i] = a;
        printf("X[%d] = %d\n", i, X[i]);
    }
    return 0;
}