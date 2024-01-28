#include <stdio.h>
#include <stdlib.h>

/**
 * a function that converts a string to an anteger
 * Return: 0
 */

int _atoi(char *s);

int main() {
    int nb;

   
    nb = _atoi(" -98 Battery Street; San Francisco, CA 94111 - USA");
    printf("%d\n", nb);

    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);

    return 0;
}    
