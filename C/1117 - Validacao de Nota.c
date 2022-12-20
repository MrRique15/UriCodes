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

int main(){
    int control = 2;
    float entry1 = -1, entry2 = -1;
    float nota1, nota2;
    nota1 = coletaNota();
    nota2 = coletaNota();
    printf("media = %.2f\n", (nota1 + nota2)/2);
    
    return 0;
}