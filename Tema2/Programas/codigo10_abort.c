#include <stdlib.h>
#include <stdio.h>
int main(void)
{
 printf("Esta sentencia va antes del abort()\n");
 abort();
 printf("Esta sentencia ya no se ejecuta\n");
 exit(EXIT_SUCCESS);
}

