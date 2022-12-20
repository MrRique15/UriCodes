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
        for(int i = valueTwo; i <= valueOne; i++){
            if(i % 13 != 0){
                somaTotal += i;
            }
        }
    }else{
        for(int i = valueOne; i <= valueTwo; i++){
            if(i % 13 != 0){
                somaTotal += i;
            }
        }
    }
    
    printf("%ld\n", somaTotal);
    
    return 0;
}