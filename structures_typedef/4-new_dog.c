#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - there is now a new dog in play
 * @name: the new dogs name
 * @age: the new dogs age
 * @owner: who is the owner of this dog
 * _strcpy - copies- duplicates one string to another
 * return: nothing
 */

int _strlen(char *s);
char *_strcpy(char *dest, char *scr);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *jock_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		jock_dog = malloc(sizeof(dog_t));

		if (jock_dog == NULL)
			return (NULL);

		jock_dog->name = malloc(sizeof(char) * name_l);

		if (jock_dog->name == NULL)
		{
			free(jock_dog);
			return (NULL);
		}

		jock_dog->owner = malloc(sizeof(char) * own_l);

		if (jock_dog->owner == NULL)
		{
			free(jock_dog->name);
			free(jock_dog);
			return (NULL);
		}

		jock_dog->name = _strcpy(jock_dog->name, name);
		jock_dog->owner = _strcpy(jock_dog->owner, owner);
		jock_dog->age = age;
	}

	return (jock_dog);
}

/**
 * _strlen - returns the length of the string
 * @s: string to count
 * return: string length
 */
int _strlen(char *s)
{
	int k = 0;

	for (; *s != '\0'; s++)
	{
		k++;
	}
	return (k);
}


