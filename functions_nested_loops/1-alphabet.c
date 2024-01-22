#include "main.h"

void _putchar(char c) {
    /* Your implementation of _putchar goes here */
}

void print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}

int main() {
    print_alphabet();
    return 0;
}

