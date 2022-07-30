#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, n, soma = 0, i = 0;
    scanf("%d", &x);
    do{
        scanf("%d", &n);
    }while(n <= x);
    while(soma <= n){
        soma = soma + x;
        i++;
        x++;
    }
    printf("%d\n", i);
    return 0;
}