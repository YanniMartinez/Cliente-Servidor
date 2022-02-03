//Ejemplo 1 -- Obtener número de procesos   (codigo01_print-pid.c)
#include <stdio.h>
#include <unistd.h> //Declara funciones que son parte del estándar POSIX
int main ()
{
    printf ("The process ID is %d\n", getpid ()); //No es forzoso poner el cast (int) porque getpid implicitamente retorna un pit_t que es entero
    printf ("The parent process ID is %d\n", (int) getppid ()); //Aunque igual podemos poner el cast a entero
    return 0;
}



//Compilación:
cc codigo01_print-pid.c -o co codigo01_print-pid.c

//Si no se le indica el nombre de salida se le asigna por defaut a.out

/*  EJECUCIÓN   */
./codigo01_print-pid  //Recordemos que ./ significa el directorio actual

//getpid() retornará siempre un valor dinámico creciente
//getppid() siempre retornará el mismo valor a menos que cambie el padre que ejecuta (En este caso terminal)
