#include <stdio.h>
#include <stdlib.h>

float coletaGols(){
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
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &x);
    }while(x < 1 || x > 2);
    
    return x;
}

int main(){
    int controller = 0;
    int golsInter, golsGremio;
    int vitoriaInter = 0, vitoriaGremio = 0, contadorEmpates = 0, grenaisCounter = 0;

    do{
        golsInter = coletaGols();
        golsGremio = coletaGols();
        if(golsInter > golsGremio){
            vitoriaInter++;
        }else if(golsInter < golsGremio){
            vitoriaGremio++;
        }else{
            contadorEmpates++;
        }
        grenaisCounter++;
        controller = menuColect();
    }while(controller == 1);
    
    printf("%d grenais\n", grenaisCounter);
    printf("Inter:%d\n", vitoriaInter);
    printf("Gremio:%d\n", vitoriaGremio);
    printf("Empates:%d\n", contadorEmpates);
    if(vitoriaInter > vitoriaGremio){
        printf("Inter venceu mais\n");
    }else if(vitoriaInter < vitoriaGremio){
        printf("Gremio venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }

    return 0;
}