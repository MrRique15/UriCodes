#include <stdio.h>
#define MAXNUMBERS 20

int main(){
    int numbers[MAXNUMBERS];
    int i, aux;

    for(i = 0; i < MAXNUMBERS; i++)
        scanf("%d", &numbers[i]);

    for(i = 0; i < MAXNUMBERS/2; i++){
        aux = numbers[i];
        numbers[i] = numbers[MAXNUMBERS - 1 - i];
        numbers[MAXNUMBERS - 1 - i] = aux;
    }
    for(i = 0; i < MAXNUMBERS; i++){
        printf("N[%d] = %d\n", i, numbers[i]);
    }
    return 0;
}