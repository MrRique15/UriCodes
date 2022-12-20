#include <stdio.h>
 
int main() {
 
    float lados[3];
    int i;
    float aux;
    float a, b, c;

    for(int i = 0; i < 3; i++){
        scanf("%f", &lados[i]);
    }

    a = lados[0];
    b = lados[1];
    c = lados[2];

    for(i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(lados[j] > lados[j+1]){
                aux = lados[j];
                lados[j] = lados[j+1];
                lados[j+1] = aux;
            }
        }
    }
    
    if((lados[0]+lados[1]) > lados[2]){
        //é triangulo
        printf("Perimetro = %.1f\n", (lados[0]+lados[1]+lados[2]));
    }else{
        //não é triangulo
        printf("Area = %.1f\n", (((a+b)*c)/2));
    }
    return 0;
}