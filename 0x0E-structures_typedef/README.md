0x0E. Structures, typedef
This project involves working with structures and typedef in C. The tasks include defining new types, creating and using functions to manipulate structures, and ensuring proper memory management.

Tasks
0. Poppy
File: dog.h

Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *
c
Copy code
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;
1. A dog is the only thing on earth that loves you more than you love yourself
File: 1-init_dog.c

Write a function that initializes a variable of type struct dog.

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
c
Copy code
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
File: 2-print_dog.c

Write a function that prints a struct dog.

Prototype: void print_dog(struct dog *d);
If an element of d is NULL, print (nil) instead of this element.
If d is NULL, print nothing.
c
Copy code
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    if (d)
    {
        printf("Name: %s\n", d->name ? d->name : "(nil)");
        printf("Age: %f\n", d->age);
        printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
    }
}
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
File: dog.h

Define a new type dog_t as a new name for the type struct dog.

c
Copy code
typedef struct dog dog_t;
4. A door is what a dog is perpetually on the wrong side of
File: 4-new_dog.c

Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails
c
Copy code
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d = malloc(sizeof(dog_t));

    if (d)
    {
        d->name = strdup(name);
        d->owner = strdup(owner);
        if (!(d->name) || !(d->owner))
        {
            free(d->name);
            free(d->owner);
            free(d);
            return (NULL);
        }
        d->age = age;
    }
    return (d);
}
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
File: 5-free_dog.c

Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);
c
Copy code
#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d)
{
    if (d)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
Repository
GitHub repository: alx-low_level_programming
Directory: 0x0E-structures_typedef

Ensure that all the files are placed in the appropriate directory and compiled as specified in the task descriptions.
