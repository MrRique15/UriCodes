#include <stdio.h>
 
int main() {
    int x1, x2;
    int soma = 0;
    scanf("%d", &x1);
    scanf("%d", &x2);
    if(x1 < x2){
        for(int i = x1+1; i < x2; i++){
            if(i%2 != 0){
                soma = soma + i;
            }
        }
    }else{
        for(int i = x2+1; i < x1; i++){
            if(i%2 != 0){
                soma = soma + i;
            }
        }
    }
    printf("%d\n", soma);
}