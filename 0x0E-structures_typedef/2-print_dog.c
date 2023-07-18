#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";


	printf("Name: %x\nAge: %x\nOwner: %x\n", d->name, d->age, d->owner);
}
