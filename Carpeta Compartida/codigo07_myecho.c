#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("\t\tCliente Servidor --- Martinez Martinez Yanni\n\n");
  int j;
  for( j=0; j < argc; j++ )
  {
    printf("argv[%d]: %s\n", j, argv[j]);
  }
  exit( EXIT_SUCCESS );
}
