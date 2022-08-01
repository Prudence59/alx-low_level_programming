#ifndef dog_H
#define dog_H

/**
 * struct dog - header file that describes a new type struct dog
 * @name = the name of dog
 *
 * @age = the age of dof
 *
 * @owner = the owner of the dog
 *
 * Description : the dog information continues
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typdef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*dog_H*/
