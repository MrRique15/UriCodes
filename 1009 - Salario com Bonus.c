#include <stdio.h>

int main(){
    char n[40];
    double salary;
    double vendas;
    double total;
    double com = 0.15;

    scanf("%s", n);
    scanf("%lf%lf", &salary, &vendas);

    total = salary+(vendas*com);

    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}