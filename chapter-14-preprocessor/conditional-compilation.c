#include <stdio.h>
#define DEBUG 1
#define INT_MAX 5

// el uso de doble ## le dice al preprocesador que coloque un valor invisible
// lo que permite concatenar los "tokens"

// Solo sirve para concatenar tokens pero no "strings" ya que no existen en el lenguaje
// los tokens son palabras claves, numeros, el procesador actua previamente y le da un codigo expandido
#define CONCAT(x, y) x##y
// En este caso el preprocesador no actua, mas bien durante la compilacion sucede la union
#define CONCAT_STRINGS(x, y) x y

int main(void)
{
#if DEBUG
    printf("Value 1\n");
    printf("Value 2\n");
#endif

// solo prueba si DEBUG esta definido como un macro
#if defined DEBUG
    printf("is defined\n");
#endif

#ifdef DEBUG
    printf("is defined\n");
#endif

#if DEBUG
    printf("DEBUG");
#elif DEBUG
    printf("GOD MODE");
#else
    printf("NO MODE");
#endif

#ifndef DEBUG
    printf("is not a macro");
#endif

    /* #if INT_MAX < 10
    #error int type is too small
    #endif */

    printf("CONCAT: %s", CONCAT_STRINGS("Hola", "Mundo"));

    // #pragma nos permite peticionar al compilador

    // #pragma data(heap_size => 1000, stack_size => 2000)
    // _Pragma data(heap_size => 1000, stack_size => 2000) es lo mismo que lo de arriba (es un operador no una directiva como las de arriba)

    // # usar solo esto significa una NULL directive

    /*
        #if INT_MAX < 10
        #
        #error int type is to small
        #
        #endif
    */

    return 0;
}