#include <stdio.h>

//Still Working//
int main(){
    int housesNum = 1, cityNum = 1;
    int i, j;
    int moradores, consumoCasa;
    int moradoresTotal = 0;
    float consumoTotal = 0;
    scanf("%d",&housesNum);
    //Try to solve timelimit problem
    while (housesNum > 0){
        moradores = 0;
        moradoresTotal = 0;
        consumoCasa = 0;
        consumoTotal = 0;
        int consumos[housesNum];
        int pessoas[housesNum];
        for(i = 0; i < housesNum; i++){
            scanf("%d %d",&moradores,&consumoCasa);
            pessoas[i] = moradores;
            consumos[i] = consumoCasa/moradores;
            consumoTotal += consumoCasa;
        }
        for(i = 0; i < housesNum-1; i++){
            for(j = i+1; j < housesNum; j++){
                if(consumos[j] < consumos[i]){
                    int aux = consumos[i];
                    consumos[i] = consumos[j];
                    consumos[j] = aux;
                    aux = pessoas[i];
                    pessoas[i] = pessoas[j];
                    pessoas[j] = aux;
                }
            }
        }
        printf("Cidade# %d:\n",cityNum);
        for(i = 0; i < housesNum; i++){
            if(i > 0){
                printf(" ");
            }
            printf("%d-%d",pessoas[i],consumos[i]);
            moradoresTotal += pessoas[i];
        }
        printf("\n");
        printf("Consumo medio: %.2f m3.\n",consumoTotal/moradoresTotal);
        cityNum++;
        scanf("%d",&housesNum);
        if(housesNum != 0){
            printf("\n");
        }
    }
}
