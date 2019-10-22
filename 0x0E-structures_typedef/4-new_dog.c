#include "dog.h"
#include <stdlib.h>

/**
  * _strdup - duplicates a string and returns a pointer to duplicate
  * @str: string to be copied
  * Return: pointer to duplicate string, or NULL if unsuccessful
  */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *arr;

	for (len = 0; str[len] != '\0'; len++)
		;
	arr = malloc(sizeof(*arr) * len + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		arr[i] = str[i];
	arr[i] = '\0';
	return (arr);
}

/**
  * new_dog - creates a new dog.
  * @name: name of dog
  * @age: float age of dog
  * @owner: name of dog's owner, string
  * Return: pointer to a dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	else
		new->name = _strdup(name);
	new->age = age;
	if (owner == NULL)
		return (NULL);
	else
		new->owner = _strdup(owner);
	return (new);
}
