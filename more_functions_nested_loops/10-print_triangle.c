#include <stdio.h>

/**
 * print_triangle - prints a triangle of squares according to size
 * @size: the size of the squares triangle
 * return: empty
 */

void print_triangle(int size)
 	
{ 
    
  
   
    if (size <= 0)
    {
    putchar('\n');
    }
    else
    {
    for (int x = 0; x < size; x++)
    {
    for (int y = size -x; y > 1; y--)
    {
    putchar(' ');
    }
    for (int z = 0; z <= x; z++) 
    {
    putchar('#');
    }
    putchar('\n');
    }
    }
}
