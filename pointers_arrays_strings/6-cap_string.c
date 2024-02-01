#include "main.h"

/**
 * cap_string - capitalizes all words of the string
 * @str: the string to be capitalized
 * return: a pointer to the changed string
 */

char *cap_string(char *str)

{ 
	//iterate over the string
	 for (int i = 0; str[i]; i++)
	{ 
	// check if the current character is a word boundary
		if (str[i] == ' ' ||
		str[i] == '\t' ||
		str[i] == '\n' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}' ||)
		{ 
       			// convert the next caracter to uppercase
			if (str[i+1] >= 'a' && str[i+1] <= 'z')
		{	
			str[i+1] = str[i+1] - 'a' + 'A';
		}
	    }		
	   }      	
			return (str);
}		
