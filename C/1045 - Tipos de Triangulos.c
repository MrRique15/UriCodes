#include <stdio.h>
 
int main() {
 
    float lados[3];
    int i;
    float aux;
    float a, b, c;

    for(int i = 0; i < 3; i++){
        scanf("%f", &lados[i]);
    }

    for(i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(lados[j] < lados[j+1]){
                aux = lados[j];
                lados[j] = lados[j+1];
                lados[j+1] = aux;
            }
        }
    }

    a = lados[0];
    b = lados[1];
    c = lados[2];

    if(a+0.001 >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");
        printf("\n");
    }else{
        if((a*a) == ((b*b) + (c*c))){
            printf("TRIANGULO RETANGULO\n");
        }else if((a*a) > ((b*b) + (c*c))){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if((a*a) < ((b*b) + (c*c))){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        }else if(a == b || b == c || c == a){
            printf("TRIANGULO ISOSCELES\n");
        }
        printf("\n");
    }
    return 0;
}
