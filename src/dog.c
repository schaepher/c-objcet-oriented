#include "../incl/dog.h"
#include <stdio.h>
#include <stdlib.h>

void dogSay(void *this)
{
    printf("Wang Wang Wang!\n");
}

AnimalVtb dogVtb = {dogSay};

struct _Dog
{
    Animal animal;
};

Dog dogCreate(char *name, int age)
{
    Dog this;
    this = (Dog)malloc(sizeof(Dog));
    animalInit((Animal)this, &dogVtb, "dog", name, age);
    return this;
}

char *dogGetName(Dog this)
{
    return animalGetName((Animal)this);
}

int dogGetAge(Dog this)
{
    return animalGetAge((Animal)this);
}