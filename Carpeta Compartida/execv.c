#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// Este ejemplo muestra la funcion execv con el comando ls -l /
int main(void)
{
  printf("\t\tCliente Servidor --- Martinez Martinez Yanni\n\n");
  // como es execv entonces es un vector/arreglo
  // el cual debe declararse previo a la llamada a execv
  // la sintaxis es:
  // int execv (char *path, char *argv[ ]);
  // path es la ruta incluyendo el nombre del comando/ejecutable
  // En C el nombre del comando/ejecutable es el argumento 0
  // por eso se repite
  // con NULL se indica que se llego al final del vector de argumentos
  char *args[]={"/bin/ls","-l","/",NULL};
  if( execv("/bin/ls", args) == -1)
  {
    perror("execv");
    exit(EXIT_FAILURE);
  }
  puts("Si execv es exitoso, esto no se imprime");
  exit(EXIT_SUCCESS);
}
