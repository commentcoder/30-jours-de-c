#include <stdio.h>

struct Personnage
{
  char *nom;
  int pdv;
  float puissance;
};

int main(void)
{
  struct Personnage p1;
  struct Personnage p2;
  struct Personnage p3;
  struct Personnage p4;

  p1.nom = "Test";
  p1.pdv = 10;
  p1.puissance = 13.37;

  printf("%s, %d, %f\n",
         p1.nom, p1.pdv, p1.puissance);

  return 0;
}