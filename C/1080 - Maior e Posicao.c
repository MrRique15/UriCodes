#include <stdio.h>
 
int main() {
 
    int numbers[100];
    int biggest = 0, position = 0;
    for(int i = 0; i < 100; i++){
        scanf("%d", &numbers[i]);
        if(numbers[i] > biggest){
            biggest = numbers[i];
            position = i+1;
        }
    }
    printf("%d\n", biggest);
    printf("%d\n", position);
    return 0;
}