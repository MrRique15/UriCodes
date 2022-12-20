#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c;
    double r1, r2;
    double x;
    double delta = 0;
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = ((pow(b,2))-(4*a*c));
    if((delta<0)||(a==0)){
        printf("Impossivel calcular\n");
    }
    else{
        r1 = (-b + (sqrtl((pow(b,2))-(4*a*c))))/(2*a);
        r2 = (-b - (sqrtl((pow(b,2))-(4*a*c))))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }    
    return 0;
}