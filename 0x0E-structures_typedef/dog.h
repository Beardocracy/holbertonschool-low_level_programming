#ifndef DOG_H
#define DOG_H

/**
  * struct dog - structure contains relevant doggy info
  * @name: char pointer to the dogs name
  * @age: float age of dog
  * @owner: char pointer to name of owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);

 #endif /* DOG_H */
