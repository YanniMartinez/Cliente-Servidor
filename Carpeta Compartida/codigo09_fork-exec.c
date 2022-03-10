#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*Este función permite crear un nuevo proceso por medio de la función fork
la cual permite crear un proceso hijo el cual haga uso de los parametros 
recibidos en caso de crearse satisfactoriamente*/
int spawn (char* program, char** arg_list)
{
  pid_t child_pid; //Creación de una variable pid_t
  child_pid = fork (); //Llamado de función fork para crear un nuevo proceso
  if (child_pid != 0) //Si el hijo no devuelve cero entonces retornará de inmediato
    return child_pid;
  else {
    execvp (program, arg_list); //Manda a llamar a la función Execvp recibiendo los punteros como parametros a modo de funcionar correctamente.
    fprintf (stderr, "an error occurred in execvp\n"); //Imprime el error en caso de existir
    abort (); //Finaliza la tarea
  }
}

/*Función que permite hacer uso de la función fork en conjunto con la execvp 
permitiendo hacer uso de punteros y lógica de subprocesos mediante fork*/
int main ()
{
  printf("\t\tCliente Servidor --- Martinez Martinez Yanni\n\n");
  //Declaración del arreflo de cadenas haciendo referencia a un comando en Linux que permite listar los archivos en su formato largo
  char* arg_list[] = {
   "ls",
   "-l",
   "/",
   NULL
  };

  //Invoca la función para ser llamada por el proceso creado con fork
  spawn ("ls", arg_list);
  printf ("done with main program\n");
  return 0;
}
