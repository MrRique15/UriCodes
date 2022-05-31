#include <stdio.h>

int main(){

    long int dias;
    int y=0, m=0, d=0;
    int i;
    
    scanf("%ld", &dias);
    
    for(i=dias;i>365;y++){
        i-=365;
    }
    for(i=i;i>=30;m++){
        i-=30;
    }
    for(i=i;i>0;d++){
        i-=1;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    return 0;
}