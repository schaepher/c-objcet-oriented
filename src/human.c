#include "../incl/human.h"
#include <stdlib.h>
#include <stdio.h>

void humanSay(void *human)
{
    Human *self = (Human *)human;
    printf("Hi, my name is %s, and my ID is %d!\n", humanGetName(self), humanGetId(self));
}

AnimalVtb humanVtb = {humanSay};

Human *humanCreate(char *name, int age, int id)
{
    struct Human *human;
    human = (Human *)malloc(sizeof(struct Human));
    animalInit((Animal *)human, &humanVtb, "human", name, age);
    human->id = id;
    return human;
}

char *humanGetName(Human *human)
{
    return animalGetName((Animal *)human);
}

int humanGetAge(Human *human)
{
    return animalGetAge((Animal *)human);
}

int humanGetId(Human *human)
{
    return human->id;
}
