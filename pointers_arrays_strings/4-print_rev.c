#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * prints a string, in reverse, followed by a new line
 * return: 0
 */

void print_rev(char *s); 

int main() {
	char str[50];
	printf("\n \"I do not fear computers. I fear the lack of them - Isaac Asimov");
	scanf("%s", str);

	print_rev(str);
		
	return 0;	
}	
