#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
       int i, num, sum = 0;

   for(i=1; i<=4; i++) {
      //printf("Ingrese el numero %d: ", i);
      scanf("%d", &num);
      sum += num;
   }

   printf("%d", sum);

   return 0;
}
