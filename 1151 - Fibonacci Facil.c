#include <stdio.h>
#include <stdlib.h>

int main(){
    int number, i, fibonacci = 0, fibonacci2 = 1, fibonacci3 = 0;
    scanf("%d", &number);
    for(i = 0; i < number; i++){
        if(i == 0){
            printf("%d ", fibonacci);
        }else if(i == 1){
            printf("%d ", fibonacci2);
        }else if(i+1 == number){
            fibonacci3 = fibonacci + fibonacci2;
            printf("%d\n", fibonacci3);
        }else{
            fibonacci3 = fibonacci + fibonacci2;
            printf("%d ", fibonacci3);
            fibonacci = fibonacci2;
            fibonacci2 = fibonacci3;
        }
    }

    return 0;
}