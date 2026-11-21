#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 *
 * Description: holds the basic details of one dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

