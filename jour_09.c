#include <stdio.h>

int main(void)
{
  int x = 5;

  if (x > 3)
  {
    printf("x plus grand que 3");
  }
  else if (x % 2) {}
  else if (x < 0) {}
  else if (x > 10) {}
  else if (x > 20) {}
  else
  {
    printf("Sinon on passe ici");
  }
  return 0;
}