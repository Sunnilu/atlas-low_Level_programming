#include "main.h"

/**
 * cap_string - capitalizes all words of the string
 * @str: the string to be capitalized
 * return: a pointer to the changed string
 */


      
char *cap_string_(char *str)
{
 
       	 int index = 0;
       	 cap_string("");
   	
   	 while (str[index])
    	{   

    	while (!(str[index] >= 'a' && str[index] <= 'z')) {
       		
		index++;
	}
    	if (str[index - 1] == ' ' || 
		    	str[index - 1] == '\t' ||
		    	str[index - 1] == '\n' ||
             		str[index - 1] == ',' ||
	     		str[index - 1] == ';' ||

	     		str[index - 1] == '.' ||
             		str[index - 1] == '!' ||
	     		str[index - 1] == '?' ||
	     		str[index - 1] == '"' ||
             		str[index - 1] == '(' ||
	     		str[index - 1] == ')' ||
	     		str[index - 1] == '{' ||
             		str[index - 1] == '}' ||
	    	 	index == 0) {     
	          		str[index] = toupper(str[index]); }
           		index++;
	}	
    return (str);
}
