#include <stdio.h>
 
int main() {
    float i = 0, sum = 0.2, j = 1, jc = 0;
    int w;
    while(i < 2.2){
        j = 1;
        j+= jc;
        for(w = 0; w < 3; w++){
            if(i == 0 || i == 1 || i > 1.9){
                printf("I=%.0f J=%.0f\n", i, j);
            }else{
                printf("I=%.1f J=%.1f\n", i, j);
            }
            j++;
        }
        i+=sum;
        jc+=sum;
    }
}