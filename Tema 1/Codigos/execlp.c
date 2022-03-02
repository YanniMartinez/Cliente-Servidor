#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// Este ejemplo muestra la funcion execlp con el comando ls -l /
int main(void)
{
  // como es execlp entonces es una lista
  // la sintaxis es:
  // int execlp (char *file, char *arg0,... char *argn, (char *)0);
  // file es el nombre del comando/ejecutable sin ruta absoluta
  // porque toma el directorio de la variable PATH, de ahi la "p" de execlp
  // En C el nombre del comando/ejecutable es el argumento 0
  // por eso se repite
  // con NULL se indica que se llego al final de la lista de argumentos
  if( execlp("ls", "ls", "-l", "/", NULL) == -1)
  {
    perror("execlp");
    exit(EXIT_FAILURE);
  }
  puts("Si execlp es exitoso, esto no se imprime");
  exit(EXIT_SUCCESS);
}
