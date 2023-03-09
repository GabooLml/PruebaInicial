#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output
//Prueba de funcionamiento

int main() {
       int i, num = 0, sum = 0;
       float suma = 0, number = 0;

   for(i=1; i<=2; i++) {
      //printf("Ingrese el numero %d: ", i);
      scanf("%d", &num);
      sum += num;
   }

   printf("%d\n", sum);

   /*sum = 0;
   num = 0;
   for(i=1; i<=4; i++) {
      //printf("Ingrese el numero %d: ", i);
      scanf("%d", &num);
      sum += num;
   }

   printf("%d\n", sum);

   for(i=1; i<=5; i++) {
      //printf("Ingrese el numero %d: ", i);
      scanf("%f", &number);
      suma += number;
   }*/

  // printf("%.3f\n", suma);

   return 0;
}
