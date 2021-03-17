#include <stdio.h>
 
int main()
{
  int n, sum = 0, i, valor;
 
  printf("Inserte la cantidad de numeros a sumar\n");
  scanf("%d", &n);
 
  printf("Ingrese %d numeros\n", n);
 
  for (i = 1; i <= n; i++)
  {
    scanf("%d", &valor);
    sum = sum + valor;
  }
 
  printf("La suma da %d\n", sum);
 
  return 0;
}
