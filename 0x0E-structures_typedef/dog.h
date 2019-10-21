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

 #endif /* DOG_H */
