#include <stdio.h>

int main(){
    int start = 1, end = 1, i, sum = 0, aux;
    scanf("%d %d", &start, &end);
    while(start > 0 && end > 0){
        sum = 0;
        if(start > end){
            aux = start;
            start = end;
            end = aux;
        }
        for(i = start; i <= end; i++){
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
        scanf("%d %d", &start, &end);
    }
    return 0;
}
