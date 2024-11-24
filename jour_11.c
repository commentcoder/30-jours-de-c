#include <stdio.h>

int main(void)
{
  int compteur = 0;

  // Passage 1 (compteur = 0)
  printf("%d\n", compteur); // 0
  compteur = compteur + 1; // 1

  // Passage 2 (compteur = 1)
  printf("%d\n", compteur); // 1
  compteur = compteur + 1; // 2
  
  // Passage 3 (compteur = 2)
  printf("%d\n", compteur); // 2
  compteur = compteur + 1; // 3
  
  // Passage 4 (compteur = 3)
  printf("%d\n", compteur); // 3
  compteur = compteur + 1; // 4
  
  // Passage 5 (compteur = 4)
  printf("%d\n", compteur); // 4
  compteur = compteur + 1; // 5

}