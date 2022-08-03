#include <stdio.h>
#include <stdio.h>

long long int fibonnacis[60];

long long int fib(int n){
    if(fibonnacis[n]){
        return fibonnacis[n];
    }else{
        if(n == 0){
            fibonnacis[n] = 0;
            return fibonnacis[n];
        }else if(n == 1){
            fibonnacis[n] = 1;
            return fibonnacis[n];
        }else{
            fibonnacis[n] = fib(n-1)+fib(n-2);
            return fibonnacis[n];
        }
    }
}

int main(){
    int number, numberCases;
    scanf("%d",&numberCases);
    while(numberCases > 0){
        scanf("%d", &number);
        printf("Fib(%d) = %lli\n", number,fib(number));
        numberCases--;
    }
    return 0;
}