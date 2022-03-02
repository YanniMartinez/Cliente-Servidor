#include <stdio.h>
#include <stdlib.h>
#include <unist.h> //Algunas distribuciones la necesitan

int main(void)
{
    pid_t child;
    if((child = fork()) == -1) { //Soi fork da -1 significa que falló
        perror("fork");
        exit(EXIT_FAILURE);
    } else if(child == 0) { //Fork le devuelve 0 al hijo
        puts("in child"); //Salida standar
        printf("\tchild pid = %d\n", getpid());
        printf("\tchild ppid = %d\n", getppid()); //En teoria debe salir el valor del padre
        exit(EXIT_SUCCESS); //El hijo manda a llamar a la función exit con variable success
    } else { // Cuando for es mayor a cero significa que es el padre
        puts("in parent");
        printf("\tparent pid = %d\n", getpid());
        printf("\tparent ppid = %d\n", getppid());
    }
    exit(EXIT_SUCCESS);
}
