#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints all the information of a dog
 * @d: the dog structure
 * return:0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d-> name : "(nil)");
		printf("age: %f\n", (d->age) ? d-> age: 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)";
	}
}
