#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, n, soma = 0;
    scanf("%d", &a);
    do{
        scanf("%d", &n);
    }while(n <= 0);
    for(int i = 0; i < n; i++){
        soma = soma + (a + i);
    }
    printf("%d\n", soma);
    return 0;
}