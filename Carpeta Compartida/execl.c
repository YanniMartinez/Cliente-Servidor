#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// Este ejemplo muestra la funcion execl con el comando ls -l /
int main(void)
{
  printf("\t\tCliente Servidor --- Martinez Martinez Yanni\n\n");
  // como es execl entonces es una lista
  // la sintaxis es:
  // int execl (char *path, char *arg0,... char *argn, (char *)0);
  // path es la ruta incluyendo el nombre del comando/ejecutable
  // En C el nombre del comando/ejecutable es el argumento 0
  // por eso se repite
  // con NULL se indica que se llego al final de la lista de argumentos
  if( execl("/bin/ls", "/bin/ls", "-l", "/", NULL) == -1)
  {
    perror("execl");
    exit(EXIT_FAILURE);
  }
  puts("Si execl es exitoso, esto no se imprime");
  exit(EXIT_SUCCESS);
}

