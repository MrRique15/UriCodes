#include <stdio.h>
 
int main() {
    int casos, numero;
    int in = 0, out = 0;
    scanf("%d", &casos);
    for(int i = 0; i < casos; i++){
        scanf("%d", &numero);
        if(numero >= 10 && numero <= 20){
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}