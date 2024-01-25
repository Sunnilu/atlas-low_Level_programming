#include "main.h"

void print_most_numbers(void)

void _putchar(char c);
     char digit;

  for (digit = '0'; digit <= '9'; digit++) {
        if (digit != '2' && digit != '4') {
            _putchar(digit);
        }
    }

    _putchar('\n');
}
