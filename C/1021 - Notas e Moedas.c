#include<stdio.h>

int main(){
   float i;
   float valor;
   int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
   int m1=0, m2=0, m3=0, m4=0, m5=0, m6=0;

   scanf("%f", &valor);

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
   for(i=i;i>=1;m1++){
       i-=1;
   }
   for(i=i;i>=0.5;m2++){
       i-=0.50;
   }
   for(i=i;i>=0.25;m3++){
       i-=0.25;
   }
   for(i=i;i>=0.10;m4++){
       i-=0.10;
   }
   for(i=i;i>=0.05;m5++){
       i-=0.05;
   }
   for(i=i;i>0.001;m6++){
       i-=0.01;
   }

   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n", n1);
   printf("%d nota(s) de R$ 50.00\n", n2);
   printf("%d nota(s) de R$ 20.00\n", n3);
   printf("%d nota(s) de R$ 10.00\n", n4);
   printf("%d nota(s) de R$ 5.00\n", n5);
   printf("%d nota(s) de R$ 2.00\n", n6);
   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n", m1);
   printf("%d moeda(s) de R$ 0.50\n", m2);
   printf("%d moeda(s) de R$ 0.25\n", m3);
   printf("%d moeda(s) de R$ 0.10\n", m4);
   printf("%d moeda(s) de R$ 0.05\n", m5);
   printf("%d moeda(s) de R$ 0.01\n", m6);
   return 0;
}