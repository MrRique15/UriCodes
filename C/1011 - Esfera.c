#include <stdio.h>
#include <math.h>

int main(){
    double pi = 3.14159;
    double R = 0;
    double volume = 0;

    scanf("%lf", &R);

    volume = (4.0/3.0)*pi*(pow(R,3));
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}