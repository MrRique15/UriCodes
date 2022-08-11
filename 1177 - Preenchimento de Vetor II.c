#include <stdio.h>

int main(){
    int numbers[1000];
    int i, collectec, aux=0;

    scanf("%d", &collectec);

    for(i = 0; i < 1000; i++){
        numbers[i] = aux;
        printf("N[%d] = %d\n", i, aux);
        aux++;
        if(aux==collectec){
            aux = 0;
        }
    }
}