#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees all allocated memory from dog struct.
  * @d: Pointer of type dog_t
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
