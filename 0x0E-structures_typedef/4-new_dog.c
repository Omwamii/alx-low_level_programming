#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * new_dog - new dogo
  * @name: dogo's name
  * @age: dogo's age
  * @owner: dogo's owner
  * Return: new dogo
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *dogo;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	dogo = malloc(sizeof(dog_t));

	if (dogo == NULL)
	{
		free(dogo);
		return (NULL);
	}
	dogo->name = malloc(i * sizeof(dogo->name));
	if (dogo->name == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		dogo->name[k] = name[k];
	dogo->age = age;
	dogo->owner = malloc(j * sizeof(dogo->owner));

	if (dogo->owner == NULL)
	{
		free(dogo->owner);
		free(dogo->name);
		free(dogo);

		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dogo->owner[k] = owner[k];

	return (dogo);
}
