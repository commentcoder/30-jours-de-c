#include <stdio.h>

#define PI 3.14159
#define INC(x) (x + 1)

int main()
{
  printf("PI est : %f\n", PI);
  printf("%d\n", INC(7));

#ifdef DEBUG
  printf("Mode debug activé !\n");
#endif

  return 0;
}
