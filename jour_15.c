#include <stdio.h>

int main(void)
{
  int notes[5] = {16, 17, 15, 12, 11};

  for (int i = 0; i < 5; ++i)
  {
    printf("%d\n", notes[i]);
  }

  return 0;
}