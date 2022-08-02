#include <stdio.h>

int main(){
    int numberOfcases;
    int numeroToVerify, i, soma = 0;
    scanf("%d", &numberOfcases);
    while(numberOfcases > 0){
        scanf("%d", &numeroToVerify);
        for(i = 2; i < numeroToVerify; i++){
            if(numeroToVerify % i == 0){
                soma = 99;
                break;
            }
        }
        if(soma == 99){
            printf("%d nao eh primo\n", numeroToVerify);
        }else{
            printf("%d eh primo\n", numeroToVerify);
        }
        soma = 0;
        numberOfcases --;
    }
    return 0;
}