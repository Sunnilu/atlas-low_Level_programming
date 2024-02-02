#include "main.h"
#include <stdio.h>

/**
 * encode into 1337
 * @n: input value
 * return: n value
 */
char *leet(char *str) {
    int i = 0;
    str [i] = '\0';   	
    	
        {
        if (str[i] == 'a' || str[i] == 'A') {
            str[i] = '4';
        } else if (str[i] == 'e' || str[i] == 'E') {
            str[i] = '3';
        } else if (str[i] == 'o' || str[i] == 'O') {
            str[i] = '0';
        } else if (str[i] == 't' || str[i] == 'T') {
            str[i] = '7';
        } else if (str[i] == 'l' || str[i] == 'L') {
            str[i] = '1';
        }
        i++;
    }	
	
    return str;
}

int main() {
    char sentence[] = "Leet Speak";
    printf("Original: %s\n", sentence);

    leet(sentence);

    printf("1337 Speak: %s\n", sentence);

    return 0;
}
