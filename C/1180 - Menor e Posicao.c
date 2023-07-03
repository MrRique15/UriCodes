#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAXINT 2147483647

int main(){
    int numbersToRead, i, minimum = MAXINT, collectedNumbers = 0, numberCharCount = 0;
    char numbersString[1000], numberChar[10];
    
    scanf("%d", &numbersToRead);
    scanf("%s", numbersString);
    int *numbersArray = malloc(sizeof(int) * numbersToRead);
    // Create a while loop to go ahed the numbers string and collect them

    for(i = 0; i < numbersToRead; i++){
        if (numbersArray[i] < minimum){
            minimum = numbersArray[i];
        }
    }

    for(i = 0; i < numbersToRead; i++){
        printf("Number in position %d is %d\n", i, numbersArray[i]);
    }

    free(numbersArray);
    return 0;
}