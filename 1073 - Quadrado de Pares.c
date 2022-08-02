#include <stdio.h>
 
int main() {
    int x, n=2;
    long resultado;
    scanf("%d", &x);
    while(n<=x){
        resultado = n*n;
        printf("%d^2 = %ld\n", n,resultado);
        n+=2;
    }
    return 0;
}