#ifndef __OBJ_DOG__
#define __OBJ_DOG__

#include "animal.h"

typedef struct Dog
{
    Animal animal;
} Dog;

Dog *dogCreate(char *name, int age);

char *dogGetName(Dog *dog);
int dogGetAge(Dog *dog);
void dogSay(void *dog);

#endif