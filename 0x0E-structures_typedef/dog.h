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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
char *new_dog(char *name, float age, char *owner);

#endif
