#include <stdio.h>

enum Jours
{
  LUNDI=1,
  MARDI=2,
  MERCREDI=3,
  JEUDI=4,
  VENDREDI=5,
  SAMEDI=6,
  DIMANCHE=7
};

int main(void)
{
  enum Jours ajd = MERCREDI;

  printf("%d\n", ajd);

  return 0;
}