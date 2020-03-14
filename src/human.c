#include "../incl/human.h"
#include <stdlib.h>
#include <stdio.h>

void humanSay(void *this)
{
    Human human = (Human)this;
    printf("Hi, my name is %s, and my ID is %d!\n", humanGetName(human), humanGetId(human));
}

AnimalVtb humanVtb = {humanSay};

struct _Human
{
    Animal animal;
    int id;
};

Human humanCreate(char *name, int age, int id)
{
    Human this;
    this = (Human)malloc(sizeof(Human));
    animalInit((Animal)this, &humanVtb, "human", name, age);
    this->id = id;
    return this;
}

char *humanGetName(Human this)
{
    return animalGetName((Animal)this);
}

int humanGetAge(Human this)
{
    return animalGetAge((Animal)this);
}

int humanGetId(Human this)
{
    return this->id;
}
