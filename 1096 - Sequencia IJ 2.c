#include <stdio.h>
 
int main() {
    int i = 1, sum = 2, j = 7;
    int w;
    while(i < 11){
        j = 7;
        for(w = 0; w < 3; w++){
            printf("I=%d J=%d\n", i, j);
            j-= 1;
        }
        i+=sum;
    }
}