#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: put a string
 * returnL a integer
 */

int _atoi(char *s)

{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
	  if (size > 0 && (*(s + count) < '0' || *(s + count) > '9' ))

	   break;

	  if (*(s + count) == '-')
     	   pn *= -1;

	  if (*(s + count) >= '0' && *(s + count) <= '9')
	      size++;
	  count++;
	}	  
     	
	for (i = 0; i < size; i++)
	{	
	    oi += (*(s + count - 1 -i) - '0') * m;
	    m *= 10;
	}	    
	
        return (oi * pn);
}	 	   	  
