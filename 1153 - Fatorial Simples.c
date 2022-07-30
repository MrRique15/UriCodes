#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n-1);
    }
}

int main(){
    int number;
    scanf("%d", &number);
    printf("%d\n", fatorial(number));
    return 0;
}