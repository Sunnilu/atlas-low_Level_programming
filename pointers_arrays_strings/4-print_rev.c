#include <stdio.h>
#include "main.h"

/**
 * prints a string, in reverse, followed by a new line
 * @s: the string to print
 * return: void
 */

void print_rev(char *s);

int main() {
	    char str[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
             print_rev(str);

    return 0;
}
