#include "../incl/dog.h"
#include <stdio.h>
#include <stdlib.h>

void dogSay(void *dog)
{
    printf("Wang Wang Wang!\n");
}

AnimalVtb dogVtb = {dogSay};

Dog *dogCreate(char *name, int age)
{
    struct Dog *dog;
    dog = (Dog *)malloc(sizeof(struct Dog));
    animalInit((Animal *)dog, &dogVtb, "dog", name, age);
    return dog;
}

char *dogGetName(Dog *dog)
{
    return animalGetName((Animal *)dog);
}

int dogGetAge(Dog *dog)
{
    return animalGetAge((Animal *)dog);
}