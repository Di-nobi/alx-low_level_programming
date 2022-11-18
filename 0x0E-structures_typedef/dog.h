#ifndef DOG_H
#define DOG_H
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/*
 * struct dog - structure definition of a dog
 * @name: name string
 * @age: integer
 * @owner: owner
 * Description: struct called "dog" that stores its name, age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
