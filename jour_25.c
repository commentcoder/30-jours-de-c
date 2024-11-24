#include <stdio.h>

int main(void)
{
  FILE *file = fopen("data.txt", "r");

  if (file == NULL)
  {
    perror("Erreur d'ouverture");
    return 1;
  }

  fclose(file);
}