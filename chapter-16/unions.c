#include <stdio.h>
#include <string.h>

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

// Podemos usar las uniones dentro de los structs para ahorrar espacio
struct catalog_item
{
    int stock_number;
    double price;
    int item_type;
    union
    {
        struct
        {
            char title[10];
            char author[10];
            int num_pages;
        } book;

        struct
        {
            char design[20];
        } mug;

        struct
        {
            char design[20];
            int colors;
            int sizes;
        } shirt;
    } item;
};

#define INT_KIND 0
#define DOUBLE_KIND 1

typedef struct
{
    int kind;
    union
    {
        int i;
        double d;
    } u;
} NumberV2;

void print_number(NumberV2 n)
{
    if (n.kind == INT_KIND)
    {
        printf("%d", n.u.i);
    }
    else
    {
        printf("%g", n.u.d);
    }
}

int main(void)
{

    // Modificar una altera a la otra, si almacenamos un valor en u.d cualquier valor
    // anteriormente guardado en u.i se perdera.

    // Igualmente cambiando u.i corrompe u.d

    // Podemos pensar en la union como un lugar para almacenar i o d pero no ambas

    u.i = 82;
    u.d = 74.8;

    struct catalog_item c;

    // No es bueno almacenar un valor en un miembro de la union para accederlo
    // mediante otro hacer esto causa que los otros valores sean indefinidos

    // Sin embargo el estandar de C menciona un caso especial.
    // Si 2 o mas miembros de la union son structs y la struct comienza con 1
    // o mas miembros parecidos, estos miembros necesitan estar en el mismo orden
    // y ser del mismo tipo pero no necesitan tener el mismo nombre

    // Si una de las structs es valida, al buscar los miembros en las otras structs tambien
    // seran validos
    strcpy(c.item.mug.design, "Cats\n");
    printf("%s", c.item.shirt.design);

    // Esto hace posible que podamos almacenar valores variados en un arreglo
    // ya sea un arreglo que contenga int o double

    // un probelma que tienen las uniones es que no podemos saber cual fue el ultimo
    // valor modificado ni de que tipo fue
    typedef union
    {
        int i;
        double d;
    } Number;

    Number number_array[100];

    number_array[0].i = 5;
    number_array[1].d = 8.395;

    NumberV2 n;
    n.kind = INT_KIND;
    n.u.i = 82;

    print_number(n);

    return 0;
}
