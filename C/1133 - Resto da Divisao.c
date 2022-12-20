#include <stdio.h>
#include <stdlib.h>

int main(){
    int valueOne, valueTwo;
    long int somaTotal = 0;

    scanf("%d", &valueOne);
    setbuf(stdin,NULL);
    scanf("%d", &valueTwo);
    setbuf(stdin,NULL);

    if(valueOne > valueTwo){
        for(int i = valueTwo+1; i < valueOne; i++){
            if(i % 5 == 2 || i % 5 == 3){
                printf("%d\n", i);
            }
        }
    }else{
        for(int i = valueOne+1; i < valueTwo; i++){
            if((i % 5 == 2) || (i % 5 == 3)){
                printf("%d\n", i);
            }
        }
    }

    return 0;
}