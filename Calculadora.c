#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
       int n, i, num, sum = 0;

   printf("Ingrese la cantidad de numeros que desea sumar: ");
   scanf("%d", &n);

   for(i=1; i<=n; i++) {
      printf("Ingrese el numero %d: ", i);
      scanf("%d", &num);
      sum += num;
   }

   printf("La suma de los %d numeros ingresados es: %d", n, sum);

   return 0;
}
