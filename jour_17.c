#include <stdio.h>

int main(void)
{
  int nombre = 42;

  int *pointeurNombre = &nombre;

  printf("%p\n", &nombre);
  printf("%p\n", pointeurNombre);

  printf("%d\n", *pointeurNombre);

  return 0;
}