#include <stdio.h>
 
int main() {
    int num;
    scanf("%d", &num);
    
    for(int i = 2; i <= num; i+=2){
        if(i%2 == 0){
            printf("%d^2 = %d\n", i, i*i);
        }
    }
 
    return 0;
}