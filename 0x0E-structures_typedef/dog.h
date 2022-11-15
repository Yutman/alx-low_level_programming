#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
  * struct dog - decribes a dog
  * @name: dog's name
  * @owner: dog's owner
  * @age: dog's age
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
