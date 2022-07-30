#include <stdio.h>
#include <stdlib.h>

int main(){
    float somaTotal = 0, i;
    for(i = 1; i <= 100; i++){
        somaTotal = somaTotal + (1/i);
    }
    printf("%.2f\n", somaTotal);
    return 0;
}