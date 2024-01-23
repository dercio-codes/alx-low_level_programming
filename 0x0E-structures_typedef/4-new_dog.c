#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - initialize the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the initalized structure of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = malloc(strlen(name) + 1);
d->owner = malloc(strlen(owner) + 1);
strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;
}
}
