#include <stdio.h>
#include <stdlib.h>

int main(){
    int numberOfLines = 0;
    scanf("%d", &numberOfLines);
    if (numberOfLines > 1 && numberOfLines < 1000){
        for(int i = 1; i <= numberOfLines; i++){
            printf("%d %d %d\n", i, i*i, i*(i*i));
        }
    }
}