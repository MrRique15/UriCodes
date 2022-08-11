#include <stdio.h>

int main (){
    int i;
    double x[100];
    double n;

    scanf("%lf", &n);
    x[0] = n;
    printf("N[0] = %.4lf\n", x[0]);
    for (i = 1; i < 100; i++){
        n = n/2;
        x[i] = n;
        printf("N[%d] = %.4lf\n", i, x[i]);
    }
}