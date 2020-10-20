#ifndef _DOG_
#define _DOG_

/**
 * struct dog - My dog Information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: My dog informations
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
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
