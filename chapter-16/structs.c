#include <stdio.h>
#include <string.h>

struct part
{
    int number;
    char name[25];
    int on_hand;
};

// Alternativa
typedef struct
{
    int number;
    char name[25];
    int on_hand;
} Part;

void print_part(struct part p)
{
    printf("Part number: %d\n", p.number);
}

struct part new(char *name, int number, int on_hand)
{
    struct part p = {.name = "", .number = number, .on_hand = on_hand};
    strcpy(p.name, name);
    return p;
}

int main(void)
{

    // Puedes inicializar la estructura en una variable
    // en caulquier orden mientras uses .name tambien puedes omitir cierto nombres hacia el final porque van en el orden
    //  de la estructura
    struct
    {
        int number;
        char name[255];
        int on_hand;
    } part1 = {528, "Disk", 10}, part2 = {914, "Printer cable", 5}, part3 = {.name = "Disk", .number = 20, 10};

    part1.on_hand++;

    printf("Item: %s - Cost: $%d\n", part1.name, part1.on_hand);
    printf("Item: %s - Cost: $%d\n", part2.name, part2.on_hand);

    part2 = part1;
    printf("Item: %s - Cost: $%d\n", part2.name, part2.on_hand);

    // Desfortunadamente no podemos omitir la palabra struct al asignar el tipo a las variables
    // Siempre que asignamos el tipo se debe inicializar el objeto
    struct part part4 = {620, "NVME", 20};

    print_part(part4);
    printf("Part4: %d\n", part4.number);

    Part part5 = {720, "HDD", 1};

    struct part new_part = new("Mouse Gamer", 204, 12);
    print_part(new_part);

    return 0;
}
