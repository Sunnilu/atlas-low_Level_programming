#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char hexDigit;

    for (hexDigit = '0'; hexDigit <= '9'; hexDigit++)
        putchar(hexDigit);

    for (hexDigit = 'a'; hexDigit <= 'f'; hexDigit++)
        putchar(hexDigit);

    putchar('\n');

    return (0);
}


