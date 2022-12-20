#include<stdio.h>

int main(){
    float temp, dist, vel, total;

    scanf("%f%f", &temp, &vel);

    dist = temp*vel;
    total = dist/12;

    printf("%.3f\n", total);
}