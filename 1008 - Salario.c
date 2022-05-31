#include <stdio.h>

int main(){
    int number, hours;
    float valorh;
    float salary;

    scanf("%d%d", &number, &hours);
    scanf("%f", &valorh);

    salary = (hours*valorh);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
    return 0;
}