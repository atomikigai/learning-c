
// Utilizamos esta forma para todas las librerias estandar de C
// Esto le dice que busque en el directorio o directorios donde las librerias residen en el sistema
// por ejemplo en sistemas UNIX se almacenan en /usr/include
#include <stdio.h>

// Utilizamos esta forma para aquellas que son programadas por nosotros
// Esto le dice que busque en el directorio actual o esto puede ser cambiado por -Ipath
// #include "some.h"

// WINDOWS PATH
// #include "c:\cprogs\utils.h"

// UNIX PATH
// #include "/cprogs/utils.h"

// No se recomienda especificar rutas ya que el programa al llevar a otra maquina es complicado de compilar

#include "boolean.h"

int main(void)
{

    int age = 18;
    int result = FALSE;

    printf("Es mayor de edad: %d", result);

    return FALSE
}