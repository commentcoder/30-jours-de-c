#include <stdio.h>

int addition(int a, int b)
{
  return a + b;
}

int main(void)
{
  int resultat = addition(3, 5);
  printf("%d\n", resultat);
  return 0;
}