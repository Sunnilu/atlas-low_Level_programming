#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of the string
 * @str: the string to be capitalized
 * return: a pointer to the changed string
 */

char *cap_string(char *str);

int main(void)
{
    char sentence[] = "this is a test sentence.";
    printf("Original: %s\n", sentence);
    
    cap_string(sentence);
    
    printf("Capitalized: %s\n", sentence);

    return 0;
}  
