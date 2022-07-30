#include <stdio.h>
#include <stdlib.h>

int main(){
    float somaTotal = 0, numero = 1, divisor = 1;
    while(numero < 39){
        somaTotal = somaTotal + (numero/divisor);
        numero+=2;
        divisor = divisor*2;
    }
    printf("%.2f\n", somaTotal);
}