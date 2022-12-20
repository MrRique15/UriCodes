#include<stdio.h>

int main(){
   long int i;
   long int valor;
   int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0;

   scanf("%ld", &valor);

   for(i=valor;i>=100;n1++){
       i-=100;
   }
   for(i=i;i>=50;n2++){
       i-=50;
   }
   for(i=i;i>=20;n3++){
       i-=20;
   }
   for(i=i;i>=10;n4++){
       i-=10;
   }
   for(i=i;i>=5;n5++){
       i-=5;
   }
   for(i=i;i>=2;n6++){
       i-=2;
   }
   for(i=i;i>0;n7++){
       i-=1;
   }

   printf("%ld\n", valor);
   printf("%d nota(s) de R$ 100,00\n", n1);
   printf("%d nota(s) de R$ 50,00\n", n2);
   printf("%d nota(s) de R$ 20,00\n", n3);
   printf("%d nota(s) de R$ 10,00\n", n4);
   printf("%d nota(s) de R$ 5,00\n", n5);
   printf("%d nota(s) de R$ 2,00\n", n6);
   printf("%d nota(s) de R$ 1,00\n", n7);
   
   return 0;
}
