#include <stdio.h>
 
int main() {
    int num[3];
    int ordenado[3];
    int i, aux;
    
    for(i = 0; i < 3; i++){
        scanf("%d", &num[i]);
        ordenado[i] = num[i];
    }
    
    for(i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(ordenado[j] > ordenado[j+1]){
                aux = ordenado[j];
                ordenado[j] = ordenado[j+1];
                ordenado[j+1] = aux;
            }
        }
    }
    
    for(i=0;i<3;i++){
        printf("%d\n", ordenado[i]);
    }
    
    printf("\n");
    
    for(i=0;i<3;i++){
        printf("%d\n", num[i]);
    }
    
    return 0;
}