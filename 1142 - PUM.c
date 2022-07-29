#include <stdio.h>
#include <stdlib.h>

int main(){
    int numberOfLines = 0;
    int numberPrinted = 1;
    scanf("%d", &numberOfLines);
    setbuf(stdin,NULL);
    for(int i = 0; i < numberOfLines; i++){
        printf("%d %d %d PUM\n", numberPrinted, numberPrinted+1, numberPrinted+2);
        numberPrinted += 4;
    }

    return 0;
}