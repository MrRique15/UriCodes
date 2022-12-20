#include <stdio.h>
#include <stdlib.h>

void showResult(int alcool, int gasolina, int diesel){
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
}

int main(){
    int alcool = 0, gasolina = 0, diesel = 0;
    int controller = 0;
    do{
        scanf("%d", &controller);
        switch(controller){
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                showResult(alcool, gasolina, diesel);
                break;
            default:
                break;

        }
    }while(controller != 4);

    return 0;
}