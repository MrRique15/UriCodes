#include <stdio.h>
 
int main() {
    int i, quantidade = 0;
    float num;
    for(i = 0; i < 6; i++){
        scanf("%f", &num);
        if(num > 0){
            quantidade++;
        }
    }
    printf("%d valores positivos\n", quantidade);
 
    return 0;
}