#include <stdio.h>
 
void showResult(int totalG, int totalC, int totalR, int totalS){
    float percent[3];
    char p = '%';

    percent[0] = (float)totalC * 100 / totalG;
    percent[1] = (float)totalR * 100 / totalG;
    percent[2] = (float)totalS * 100 / totalG;

    printf("Total: %d cobaias\n", totalG);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2f %c\n", percent[0], p);
    printf("Percentual de ratos: %.2f %c\n", percent[1], p);
    printf("Percentual de sapos: %.2f %c\n", percent[2], p);
}

int main() {
    int cases, quantEntrada;
    int totalCobaias = 0, totalC = 0, totalR = 0, totalS = 0;
    char codeCobaia;

    scanf("%d", &cases);

    while(cases > 0){
        scanf("%d %c", &quantEntrada, &codeCobaia);
        switch(codeCobaia){
            case 'C':
                totalC += quantEntrada;
            break;

            case 'R':
                totalR += quantEntrada;
            break;

            case 'S':
                totalS += quantEntrada;
            break;
        }
        totalCobaias += quantEntrada;
       
        cases--;
    }
    showResult(totalCobaias, totalC, totalR, totalS);
    return 0;
}