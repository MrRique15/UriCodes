#include <stdio.h>
#include <stdlib.h>

int main(){
    int numberOfTests, i, soma = 0, x, y, auxiliar;
    scanf("%d", &numberOfTests);
    setbuf(stdin, NULL);
    for(i = 0; i < numberOfTests; i++){

        scanf("%d %d", &x, &y);
        setbuf(stdin, NULL);
        
        while(y > 0){
            auxiliar = x;
            if(auxiliar < 0){
                auxiliar = auxiliar * -1;
            }
            if(auxiliar % 2 == 1){
                soma += x;
                y--;
                x += 2;
            }else{
                x++;
            }
        }

        printf("%d\n", soma);
        soma = 0;
    }

    return 0;
}