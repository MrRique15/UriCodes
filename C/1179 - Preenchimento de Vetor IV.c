#include <stdio.h>

void imprimeVetor(int vetor[], int tamanho, int tipo){
    for (int i = 0; i < tamanho; i++){
        tipo == 0? printf("par[%d] = %d\n", i, vetor[i]) : printf("impar[%d] = %d\n", i, vetor[i]);
    }
}

int main (){
    int numerosParaLer = 15, numeroLido;
    int parPosition = 0, imparPosition = 0;
    int par[5], impar[5];

    while (numerosParaLer > 0)
    {
        scanf("%d", &numeroLido);

        if (numeroLido % 2 == 0){
            par[parPosition] = numeroLido;
            parPosition++;
            if(parPosition == 5){
                imprimeVetor(par, parPosition, 0);
                parPosition = 0;
            }
        }else{
            impar[imparPosition] = numeroLido;
            imparPosition++;
            if(imparPosition == 5){
                imprimeVetor(impar, imparPosition, 1);
                imparPosition = 0;
            }
        }

        numerosParaLer--;
    }
    
    imprimeVetor(impar, imparPosition, 1);
    imprimeVetor(par, parPosition, 0);

    return 0;
}