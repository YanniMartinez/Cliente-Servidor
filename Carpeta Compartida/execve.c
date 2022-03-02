#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// Este ejemplo muestra la funcion execve con el comando ls -l /
int main(void)
{
  printf("\t\tCliente Servidor --- Martinez Martinez Yanni\n\n");
  // como es execve entonces es un vector/arreglo 
  // y ademas puede leer variables de entorno que vienen en un arreglo 
  // y que solo son validas para la ejecucion del archivo dentro de la función execve
  // la sintaxis es:
  // int execve(char *path, char *argv[ ], char *envp[ ]);
  // path es la ruta incluyendo el nombre del comando/ejecutable
  // En C el nombre del comando/ejecutable es el argumento 0
  // por eso se repite
  // con NULL se indica que se llego al final del vector de argumentos
  char * args[]={"/bin/ls", "-l", "/", NULL};
  char *variables_entorno[] = { "PATH=/bin:/usr/bin", "USER=joe", NULL };
  printf( "el valor de la variable de entorno USER es: %s\n", getenv("USER") );
  if( execve("/bin/ls", args, variables_entorno) == -1)
  {
    perror("execve");
    exit(EXIT_FAILURE);
  }
  puts("Si execve es exitoso, esto no se imprime");
  exit(EXIT_SUCCESS);
}
