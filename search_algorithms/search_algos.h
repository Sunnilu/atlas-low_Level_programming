#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
struct listint_s - singly linked list
* @n: integer
* @index: index of the node in the list
* @next: pointer to the next node
*/
typedef struct listint_s
{
    int n;
    size_t index;
    structlistint_s *next;
}listint_;t

/**
* structs skiplist_s - singly linked list with an express lane
* @n: integer
* @ index: indexf thenode list
* @next: pointer to the next node
* @express: pointerto thenext node in the express lane
*/
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
}skiplist_s;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

endif; /* SEARCH_ALGOS_ */

