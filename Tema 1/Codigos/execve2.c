#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// Este ejemplo muestra la funcion execve
// invocando a un programa nuestro getenv_user
// para leer la variable de entorno USER
int main(void)
{
  // como es execve entonces es un vector/arreglo 
  // y ademas puede leer variables de entorno que vienen en un arreglo 
  // y que solo son validas para la ejecucion del ejecutable dentro de la funcion execve
  // la sintaxis es:
  // int execve(char *path, char *argv[ ], char *envp[ ]);
  // path es la ruta incluyendo el nombre del comando/ejecutable
  // En C el nombre del comando/ejecutable es el argumento 0
  // por eso se repite
  // con NULL se indica que se llego al final del vector/arreglo
  char * args[]={"./getenv_user", NULL};
  char *variables_entorno[] = { "PATH=/bin:/usr/bin", "USER=joe", NULL };
  printf( "el valor de la variable de entorno USER es: %s\n", getenv("USER") );
  printf( "ahora ejecutando ./getenv_user, el valor de la variable de entorno USER es: \n" );
  if( execve("./getenv_user", args, variables_entorno) == -1)
  {
    perror("execve");
    exit(EXIT_FAILURE);
  }
  puts("Si execve es exitoso, esto no se imprime");
  exit(EXIT_SUCCESS);
}
