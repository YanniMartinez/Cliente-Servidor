#include <stdio.h>
#include <unistd.h>

int main()
{
  int arg_wait;
  printf( "Iniciando proceso con pid %d\n", getpid() );
  printf( "Llamando a wait\n" );
  int retorno_wait = wait( &arg_wait );
  printf( "Despues de wait\n" );
  printf( "El valor &arg_wait=%X\n",&arg_wait );
  printf( "La variable arg_wait=%d\n",arg_wait );
  printf( "La variable retorno_wait=%d\n",retorno_wait );
  return 0;
}
