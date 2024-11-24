#include <stdio.h>
#include <string.h>

int main(void)
{
  const char *message = "Bonjour !";
  char buffer[50];
  FILE *file;

  file = fopen("fichier.txt", "w");
  if (file == NULL)
  {
    perror("Erreur d'ouverture (écriture)");
    return 1;
  }

  size_t written = fwrite(
      message,
      sizeof(char),
      strlen(message),
      file);

  if (written != strlen(message))
  {
    perror("Erreur d'écriture");
    fclose(file);
    return 1;
  }

  fclose(file);

  file = fopen("fichier.txt", "r");
  if (file == NULL)
  {
    perror("Erreur d'ouverture (lecture)");
    return 1;
  }

  size_t read = fread(
      buffer,
      sizeof(char),
      sizeof(buffer) - 1,
      file);

  if (read == 0)
  {
    perror("Erreur de lecture");
  }
  else
  {
    buffer[read] = '\0';
    printf("Contenu du fichier : %s\n", buffer);
  }

  fclose(file);

  size_t fread(
      void *restrict ptr,
      size_t size,
      size_t nitems,
      FILE *restrict stream);

  size_t fwrite(
      const void *restrict ptr,
      size_t size,
      size_t nitems,
      FILE *restrict stream);

  return 0;
}
