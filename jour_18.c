#include <stdio.h>

void increment(int x)
{
  x = x + 1;
}

int main(void)
{
  int x = 1;

  increment(x);

  return 0;
}