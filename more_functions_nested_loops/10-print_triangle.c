#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle of squares according to size
 * @size: the size of the squares triangle
 * return: empty
 */

void print_triangle(int size) {
    if (size == 0) {
        _putchar('\n');
    } else {
        for ( i == 1; i <= size; i++) {
            for ( j == 1; j <= i; j++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
