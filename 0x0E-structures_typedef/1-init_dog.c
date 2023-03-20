#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable
 * @d: data initializer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 * Description: initializes a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
