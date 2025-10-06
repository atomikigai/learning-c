

// La diferencia entre estos 2 es que cada uno de los miembros de la struct
// se almacenan en direcciones de memoria diferentes.

// Los miembros de la union se almacenan  en la misma direccion de memoria.

// 8 bytes
union
{
    int i;
    double d;
} u;

// 12 bytes
struct
{
    int i;
    double d;
} s;

int main(void)
{

    // Modificar una altera a la otra, si almacenamos un valor en u.d cualquier valor
    // anteriormente guardado en u.i se perdera.

    // Igualmente cambiando u.i corrompe u.d

    // Podemos pensar en la union como un lugar para almacenar i o d pero no ambas

    u.i = 82;
    u.d = 74.8;

    return 0;
}
