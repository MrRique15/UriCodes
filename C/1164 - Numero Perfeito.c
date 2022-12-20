#include <stdio.h>

int main(){
    int numberOfcases;
    int numeroToVerify, soma = 0, i;
    scanf("%d", &numberOfcases);
    while(numberOfcases > 0){
        scanf("%d", &numeroToVerify);
        for(i = 1; i < numeroToVerify; i++){
            if(numeroToVerify % i == 0){
                soma += i;
            }
        }
        if(soma == numeroToVerify){
            printf("%d eh perfeito\n", numeroToVerify);
        }else{
            printf("%d nao eh perfeito\n", numeroToVerify);
        }
        soma = 0;
        numberOfcases --;
    }
    return 0;
}