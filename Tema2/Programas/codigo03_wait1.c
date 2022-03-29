#include <stdio.h>
#include <unistd.h>

int main()
{
  int pid = getpid();
  printf( "Iniciando proceso con pid %d\n", pid );
  printf( "Llamando a wait\n" );
  int estatus = wait( pid ); 
  printf( "Despues de wait\n" );
  printf( "Estatus de retorno de wait=%d\n",estatus );
  return 0;
}
