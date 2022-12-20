#include <stdio.h>

int main(){
    double n1, n2;
    double p1 = 3.5;
    double p2 = 7.5;
    double MEDIA;

    scanf("%lf%lf", &n1, &n2);

    MEDIA = ((n1*p1)+(n2*p2))/(p1+p2);

    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;

}