#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Name of structure
 * @name: String
 * @age: Int
 * @owner: String
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
