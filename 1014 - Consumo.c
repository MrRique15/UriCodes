#include <stdio.h>

int main(){
    float km, lt;
    float consumo;

    scanf("%f %f", &km, &lt);

    consumo = km/lt;
    printf("%.3f km/l\n", consumo);
    return 0;
}