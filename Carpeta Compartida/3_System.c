//Documentación de la función system
//https://pubs.opengroup.org/onlinepubs/007904975/functions/system.html

#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int return_value;
    printf("Antes de system: "); //opcional
    return_value = system("ls -l / "); //Indica directorio raíz con "/"
    printf("El valor de la variable return es: %d \n",return_value); //opcional
    return return_value;
}