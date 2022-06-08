#include <stdio.h>

int main(){
    int first, second;
    scanf("%d %d", &first, &second);
    while(first != second){
        if(first > second){
            printf("Decrescente\n");
        }else{
            printf("Crescente\n");
        }
        scanf("%d %d", &first, &second);
    }
    return 0;
}