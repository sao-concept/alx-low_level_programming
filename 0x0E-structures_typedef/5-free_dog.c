#include <stdlib.h>
#include "dog.h"

/**
* free_dog -This function frees dog
* @d: pointer to the dog to be free
*
* Return: void
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
