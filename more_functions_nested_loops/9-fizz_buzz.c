#include <stdio.h>

/**
 * prints the numbers from 1 to 100
 * multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz
 * for numbers which are multiples of both 3 and 5 print FizzBuzz
 * each number or word should be separated by a space
 * return: 0
 */

int main(void) {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}
