#include <stdio.h>
#include <stdlib.h>

int main(){
    int nCases = 0;
    float x, y;
    scanf("%d",&nCases);
    while(nCases > 0){
        scanf("%f %f", &x, &y);
        setbuf(stdin,NULL);

        if(y == 0){
            printf("divisao impossivel\n");
        }else if(x == 0){
            printf("0.0\n");
        }else{
            printf("%.1f\n",(x/y));
        }
        nCases--;
    }
    return 0;
}