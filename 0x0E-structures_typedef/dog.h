#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's name, age and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 */
struct dog 
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog;
