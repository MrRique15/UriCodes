#include <stdio.h>
#include <stdlib.h>

int main(){
    int valueCollected, i;
    do{
        scanf("%d", &valueCollected);
        if(valueCollected > 0){
            for(i = 1; i <= valueCollected; i++){
                if(i == valueCollected){
                    printf("%d\n", i);
                }else{
                    printf("%d ", i);
                }
            }
        }
    }while(valueCollected != 0);
    return 0;
}