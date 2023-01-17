#include "dog.h"

/**
  * init_dog - initializes variable of type struct dog
  * @d: ptr to struct dog
  * @name: ptr to char dog's name
  * @age: dogo age
  * @owner: ptr to owner's dog char
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
