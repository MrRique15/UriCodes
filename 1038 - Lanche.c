#include <stdio.h>
 
int main() {
 
    float quant;
    float val;
    int cod;
    float prec[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    scanf("%d", &cod);
    scanf("%f", &quant);

    cod = cod-1;
    val = quant * prec[cod];

    printf("Total: R$ %.2f\n", val);
    return 0;
}