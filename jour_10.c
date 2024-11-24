#include <stdio.h>

int main(void)
{
  int jour = 3;

  switch (jour)
  {
  case 1:
    printf("On est lundi\n");
    break;
  case 2:
    printf("On est mardi\n");
    break;
  case 3:
    printf("On est mercredi\n");
    break;
  case 4:
    printf("On est jeudi\n");
    break;
  case 5:
    printf("On est vendredi\n");
    break;
  case 6:
    printf("On est samedi\n");
    break;
  case 7:
    printf("On est dimanche\n");
    break;
  default:
    printf("Je ne connais pas ce jour là\n");
    break;
  }

  return 0;
}