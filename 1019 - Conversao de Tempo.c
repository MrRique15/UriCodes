#include<stdio.h>

int main(){
    int h=0, m=0, s=0;
    int i;

    scanf("%d", &s);

    for(i=s;i>=3600;h++){
        i-=3600;
    }
    for(i=i;i>=60;m++){
        i-=60;
    }
    
    printf("%d:%d:%d\n", h, m, i);
    return 0;
}