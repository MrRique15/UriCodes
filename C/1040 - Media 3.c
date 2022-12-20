#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, n5;
    float media;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    n1 = n1 * 2;
    n2 = n2 * 3;
    n3 = n3 * 4;
    media = (n1+n2+n3+n4)/10;
    printf("Media: %.1f\n", media);
    if(media >= 7.00){
        printf("Aluno aprovado.\n");
    }
    else if(media < 5.00){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        media = (media + n5)/ 2;
        if(media >= 5.00){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }
    return 0;
}