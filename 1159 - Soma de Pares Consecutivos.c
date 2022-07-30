#include <stdio.h>
int main(){
    int x, i, soma=0;
    do{
        scanf("%d", &x);
        if(x != 0){
            if(x%2 == 0){
                for(i=x; i <= x+8; i += 2){
                    soma += i;
                } 
            }else{
                for(i = x+1; i <= x+9; i += 2){
                    soma += i;
                }
            }
            printf("%d\n", soma);
            soma=0;
        }
    }while(x!=0);
    return 0;
}