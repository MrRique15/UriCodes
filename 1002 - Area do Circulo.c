#include<stdio.h>

int main(){
    double raio;
    double n = 3.14159;
    double area = 0;

    scanf("%lf", &raio);

    area = ((raio*raio)*n);
    printf("A=%.4lf\n", area);
    return 0;
}