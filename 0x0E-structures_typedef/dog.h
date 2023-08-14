#ifndef STRTYP
#define STRTYP
/**
 * struct dog - structure of my dog bruce
 * @age: dogs age
 * @name: name of dog
 * @owner: my name as the owner
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
void free_dog(dog_t *d);
#endif
