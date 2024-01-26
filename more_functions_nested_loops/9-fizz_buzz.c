#include "main.h"
#include <stdio.h>

/**
 * prints the numbers from 1 to 100
 * multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz
 * for numbers which are multiples of both 3 and 5 print FizzBuzz
 * return: 0
 */

int main(void) {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}
