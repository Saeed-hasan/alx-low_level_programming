#ifndef DOG_H
#define DOG_H

/**
 *struct dog - adog struct
 *@name: dogs name
 *@age: dogs age
 *@owner: owners name
 *Descrition: poppy
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
