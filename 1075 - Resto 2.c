#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    for(int i = 2; i < 10000; i++){
        if(i%x == 2){
            printf("%d\n", i);
        }
    }
    return 0;
}