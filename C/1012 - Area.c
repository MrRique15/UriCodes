#include<stdio.h>
#include<math.h>

int main(){
    double A, B, C;
    double at, ac, atr, aq, ar;
    float pi = 3.14159;

    scanf("%lf%lf%lf", &A, &B, &C);

    at=(A*C)/2;
    ac=pi*(pow(C,2));
    atr=(A+B)*C/2;
    aq=pow(B,2);
    ar=A*B;

    printf("TRIANGULO: %.3lf\n", at);
    printf("CIRCULO: %.3lf\n", ac);
    printf("TRAPEZIO: %.3lf\n", atr);
    printf("QUADRADO: %.3lf\n", aq);
    printf("RETANGULO: %.3lf\n", ar);
    return 0;
}