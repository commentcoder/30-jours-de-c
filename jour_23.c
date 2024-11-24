#include <unistd.h>

int main(void)
{
  char buffer[100];
  ssize_t length;

  length = read(0, &buffer, sizeof(buffer) - 1);

  if (length == -1)
  {
    // Gestion d'erreur
    return 1;
  }

  ssize_t read(
    int fildes,
    void *buf,
    size_t nbyte
  );

  buffer[length] = '\0';

  write(1, "Votre chaine : ", 15);
  write(1, buffer, length);

  return 0;
}