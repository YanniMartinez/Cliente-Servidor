# Funciones y comandos

## Comandos

|Comando|Descripción|
|--|--|
|`ls -l`| Listado largo, Long List. Permite visualizar más información al listar, entre ellos los permisos de los archivos y usuarios|
|`pwd`| Significa Printing Work directory, es decir, imprime la ruta absoluta del directorio actual de trabajo|
|`cd `| Para regresar al comando de casa sólo ejecutar cd, por lo general el directorio de casa es: `/home/user`|
|`cd ..`| Subir un directorio o un nivel|
|`ls -l | more`|Para paginar la salida podemos usar el complemento `| more` el cual nos perdirá dar enter para seguir mostrando más contenido (Sólo aplica cuando hay mucho elementos a listar)|
|`chmod`| Change Mode. Permite cambiar los permisos de un archivo|
|`man`|Proviene de manual y nos permite obtener ayuda de un comando. Ej. `man chmod`|
|`sudo`| Super user do|
|`ps`|Process, muestra los procesos activos o vivos en esa terminal.El hecho de ejecutar el comando ps, lanza un proceso asociado a la ejecución del comando ps. Cuando una ejecución termina, el proceso asociado a esa ejecución muere|
|`ps -e -o pid,ppid,command`||

## Permisos Linux
El digito más a la izquierda corresponde a `-` para indicar que se trata de un archivo y `d` cuando se trata de un directorio.
Además hoy en día puede venir una `s` para una URL suave.

Orden de los Permisos:

|Caracter|Función|
|--|--|
|`r`|Tiene permiso de lectura|
|`w`|Tiene permiso de escritura|
|`x`|Tiene permiso de ejecución|

* El primer conjunto de 3 son los permisos para el dueño
* El siguiente grupo de 3 son los permisos para el resto del grupo de usuarios al que pertenece el dueño
* El siguiente grupo es el resto de usuarios del sistema


<div align="center"><img src="permisos.png"></div>

Para evitar accesos de otros usuarios en sus archivos se deberán aplicar los permisos `-rwx------`
Si el profesor le diera un `chmod 700 *` a todos los archivos de su sitio web no podríamos acceder a ver lo de la web, nos diría que acceso incorrecto.

Para observar los usuarios registrados en su sistema ejecuten  `cat /etc/passwd` y los grupos registrados están en `/etc/group` 
Tiene la siguiente estructura: `idUser:x:UserID:GroupID`
Cuando encontremos algo como `/sbin/nologin` significa que no se puede hacer login con este usuario

## Comando ps

* El comando ps muestra los procesos (vivos) de esa terminal o shell ejecución del comando ps muere los procesos

    El hecho de ejecutar el comando ps, lanza un proceso asociado a la ejecución del comando ps

    Recuerden que cuando una ejecución termina, el proceso asociado a esa ejecución muere

    el comando ps es como una fotografía o instantánea de los procesos no es dinámico

    <div align="center"><img src="comandoPS.png"></div>

* Terminal asociada con el proceso / Terminal associed with the process **(tname=TTY)**

**Time** es el tiempo que lleva ejecutandose el proceso.

La salida ordenada por *pit*

* Comando **man ps**: Nos permite ver toda la ayuda relacionada con el comando PS.
    Muestra un snapshot (instantanea) de los procesos activos pero sólo los de esa terminal.

## Comando ps -e -o pid,ppid,command

* El comando `ps -e -o pid,ppid,command` muestra lo que le indicamos:

    <div align="center"><img src="ps-e-o.png"></div>

|pid|pid|owner|path|
|--|--|--|--|
|Proceso actual|Proceso Padre|Dueño|Ruta|
 
<div align="center"><img src="ps-e-o2.png"></div>

Apareceran el número de terminales:

<div align="center"><img src="ps-e-o3.png"></div>

## Creación de procesos

En Linux hay 3 maneras de crear un proceso.

* system() y viene de las librerias del lenguaje C
* fork()
* exec()

## system
La función system() provee una manera sencilla de ejecutar un comando desde un programa, como si fuera invocado desde un Shell. Invocando un programa con los privilegios de root usando la función system(), puede tener diferentes resultado de un sistema Linux a otro, debido a que es dependiente de la versión de Shell que se ocupe.

<div align="center"><img src="system.png"></div>


## Comando fork
Fork le devuelve al padre el pid del hijo. Mientras que al hijo le devuelve 0

<div align="center"><img src="fork.png"></div>

Al llamar al fork creamos un hijo.

* **Fork()** le devuelve al padre el pid del hijo.

<div align="center"><img src="fork2.png"></div>

Programa 5:
<div align="center"><img src="programa5.png"></div>