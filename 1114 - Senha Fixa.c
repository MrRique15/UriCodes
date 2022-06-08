#include <stdio.h>

int main(){
    int password = 2002, read;
    scanf("%d", &read);
    while (read != password){
        printf("Senha Invalida\n");
        scanf("%d", &read);
    }
    if(read == password){
        printf("Acesso Permitido\n");
    }
    
    return 0;
}