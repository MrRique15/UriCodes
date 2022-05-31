#include <stdio.h>

int main(){
    int p1, p2;
    int q1, q2;
    float v1, v2;
    float total;

    scanf("%d%d%f", &p1, &q1, &v1);
    scanf("%d%d%f", &p2, &q2, &v2);

    total = (v1*q1)+(v2*q2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}