#include <stdio.h>
#include <stdlib.h>

float coletaNota(){
    float x = -1;
    do{
        scanf("%f", &x);
        setbuf(stdin,NULL);
        if(x < 0 || x > 10){
            printf("nota invalida\n");
        }
    }while(x < 0 || x > 10);

    return x; 
}

int menuColect(){
    int x = 0;
    do{
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &x);
    }while(x < 1 || x > 2);
    
    return x;
}

int main(){
    int controller = 0;
    float nota1, nota2;
    
    do{
        nota1 = coletaNota();
        nota2 = coletaNota();
        printf("media = %.2f\n", (nota1 + nota2)/2);
        controller = menuColect();
    }while(controller == 1);
    
    return 0;
}