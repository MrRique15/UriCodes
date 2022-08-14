#include <stdio.h>

int main(){
    double A, B, C;
    double p1 = 2;
    double p2 = 3;
    double p3 = 5;
    double MEDIA;

    scanf("%lf%lf%lf", &A, &B, &C);

    MEDIA = ((A*p1)+(B*p2)+(C*p3))/(p1+p2+p3);

    printf("MEDIA = %.1lf\n", MEDIA);
    
    return 0;
}
