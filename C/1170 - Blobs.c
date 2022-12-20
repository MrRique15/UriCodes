#include <stdio.h>

int main(){
    float minFood = 1.0, foodReceived;
    int numberOfCases, i;

    scanf("%d", &numberOfCases);

    for(i=0;i<numberOfCases;i++){

        int daysUntilDeath = 0;
        scanf("%f", &foodReceived);
        
        while(foodReceived > minFood){
            daysUntilDeath++;
            foodReceived /= 2;
        }

        printf("%d dias\n", daysUntilDeath);
    }
    return 0;
}