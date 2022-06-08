#include <stdio.h>
 
void getCases(int *n){
    scanf("%d", n);
}

void showResult(int contImp[], int cases){
    int i;
    for(i = 0; i < cases; i++){
        printf("%d\n", contImp[i]);
    }
}

int main() {
 
    int cases, start, end, i, contWhil = 0, sum = 0, aux;
    getCases(&cases);
    int contImp[cases];

    while(contWhil < cases){
        scanf("%d %d", &start, &end);
        if(start > end){
            aux = start;
            start = end;
            end = aux;
        }
        sum = 0;
        for(i = start+1; i < end; i++){
            if(i%2 != 0){
                sum+=i;
            }
        }
        contImp[contWhil] = sum;
        contWhil++;
    }
    showResult(contImp, cases);
    return 0;
}