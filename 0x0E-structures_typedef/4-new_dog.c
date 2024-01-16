#include <stdlib.h>
#include "dog.h"

/**
* new_dog -This function that creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog Owner name
*
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int newDog, dogOwner, count;
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (newDog = 0; name[newDog]; newDog++)
;
newDog++;
dog->name = malloc(newDog *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (count = 0; count < newDog; count++)
dog->name[count] = name[count];
dog->age = age;
for (dogOwner = 0; owner[dogOwner]; dogOwner++)
;
dogOwner++;
dog->owner = malloc(dogOwner *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (count = 0; count < dogOwner; count++)
dog->owner[count] = owner[count];
return (dog);
}
