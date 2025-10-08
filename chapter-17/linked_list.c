#include <stdio.h>
#include <stdlib.h>

// Una linked list consiste en un cadena de estructuras llamadas nodos
// el ultimo nodo de la lista es un null pointer.
// una linked list es mas flexible que un array. Nos permite eliminar e insertar nodos a la lista.
// Permitiendo que la lista crezca o se reduzca en base a la necesidad
// Por otro lado, perdemos la capacidad de acceder aleatoriamente al arreglo.

// Acceder a un node en la linked list es rapido si el nodo esta cerca del comienzo de la lista.
//  y lento si esta cerca del final.

struct node
{
    int value;         /* data stored in the node */
    struct node *next; /* pointer to the next node */
};

struct node *add_to_list(struct node *list, int n)
{
    // Asiganmos un nuevo espacio en memoria
    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    // Asignamos el valor a ese espacio
    new_node->value = n;
    // luego asignamos un puntero a ese espacio
    new_node->next = list;
    return new_node;
}

int main(void)
{

    // Indica que la lista incialmente esta vacia
    struct node *first = NULL;

    // Crear un nodo requiere 3 pasos
    // 1. Asignar memoria para el nodo.
    // 2. Almacenar data en el nodo.
    // 3. Insertar el nodo a la lista

    // Usamos malloc para asginar la memoria al nuevo nodo, el nuevo nodo tiene un bloque de memoria suficiente
    // para almacenar una estructura de tipo nodo.
    struct node *new_node;

    // el programa va a compilar pero cuando trate de almacenar memoria vera que no es suficiente y el programa se rompera
    //  new_node = malloc(sizeof(new_node)) /* WRONG */
    // el parentesis es obligatorio para acceder a la propiedad de la struct
    //(*new_node).value = 10;
    // Otra alternativa es usar ->

    // El operador & todavia es necesario, new_node es un puntero, sin el &
    // estariamos pasando a scanf el valor de new_node->value que tiene un tipo int
    // scanf("%d", &new_node->value);

    new_node = malloc(sizeof(struct node));
    new_node->value = 10;
    new_node->next = first;
    first = new_node;

    printf("new_node: %d\n", new_node->value);
    printf("first: %d\n", first->value);

    // Asiganmos un nuevo bloque de memoria
    new_node = malloc(sizeof(struct node));
    new_node->value = 20;
    new_node->next = first;
    first = new_node;

    printf("new_node: %d\n", new_node->value);
    printf("first: %d\n", first->value);

    first = add_to_list(first, 30);
    printf("first: %d\n", first->value);

    first = add_to_list(first, 40);
    printf("first: %d\n", first->value);

    return 0;
}