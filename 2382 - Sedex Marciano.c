#include <stdio.h>
#include <math.h>

int main (){
    float largura, altura, profundidade, raioEsfera, larguraEsfera;
    double diagonalCaixa;

    scanf("%f %f %f %f", &largura, &altura, &profundidade, &raioEsfera);

    larguraEsfera = 2 * raioEsfera;
    diagonalCaixa = sqrt(pow(largura, 2) + pow(altura, 2) + pow(profundidade, 2));
    if(diagonalCaixa <= larguraEsfera){
        printf("S\n");
    }else{
        printf("N\n");
    }
    
    return 0;
}
