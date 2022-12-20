#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float number, soma = 0, quantidade = 0;
    do{
        scanf("%f", &number);
        if(number > 0){
            soma += number;
            quantidade++;
        }
    }while(number > 0);
    printf("%.2f\n", (soma/quantidade));
    return 0;
}