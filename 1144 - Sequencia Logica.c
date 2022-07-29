#include <stdio.h>
#include <stdlib.h>

int main(){
    int numberOfLines = 0;
    scanf("%d", &numberOfLines);
    setbuf(stdout, NULL);

    for(int i = 1; i <= numberOfLines; i++){
        printf("%d %d %d\n", i, i*i, i*(i*i));
        printf("%d %d %d\n", i, (i*i)+1, (i*(i*i))+1);
    }
}