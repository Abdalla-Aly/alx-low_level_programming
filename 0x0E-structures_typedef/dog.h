#ifndef dog_h
#define dog_h

/**
 * struct dog - type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: struct includes three members.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
