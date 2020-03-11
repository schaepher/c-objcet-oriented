#include "../incl/human.h"
#include <stdlib.h>
#include <stdio.h>

void humanSay(void *human)
{
    Human self = (Human)human;
    printf("Hi, my name is %s, and my ID is %d!\n", humanGetName(self), humanGetId(self));
}

AnimalVtb humanVtb = {humanSay};

struct _Human
{
    Animal animal;
    int id;
};

Human humanCreate(char *name, int age, int id)
{
    Human human;
    human = (Human)malloc(sizeof(Human));
    animalInit((Animal)human, &humanVtb, "human", name, age);
    human->id = id;
    return human;
}

char *humanGetName(Human human)
{
    return animalGetName((Animal)human);
}

int humanGetAge(Human human)
{
    return animalGetAge((Animal)human);
}

int humanGetId(Human human)
{
    return human->id;
}
