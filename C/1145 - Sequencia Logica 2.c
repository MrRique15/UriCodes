#include <stdio.h>
#include <stdlib.h>

int main(){
    int firstNumber, secondNumber;
    int numberShown = 1;
    scanf("%d %d", &firstNumber, &secondNumber);
    while(numberShown < secondNumber){
        for(int i = 0; i < firstNumber; i++){
            if(i + 1 == firstNumber){
                printf("%d\n", numberShown);
                numberShown++;
            }else{
                printf("%d ", numberShown);
                numberShown++;
            }
        }
    }
    return 0;
}