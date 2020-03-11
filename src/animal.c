#include "../incl/animal.h"

struct _Animal
{
    AnimalVtb *vptr;
    char *type;
    char *name;
    int age;
};

void animalInit(Animal self, AnimalVtb *vptr, char *type, char *name, int age)
{
    self->vptr = vptr;
    self->type = type;
    self->name = name;
    self->age = age;
}

void animalSay(Animal self)
{
    (*self->vptr->say)(self);
}

char *animalGetName(Animal self)
{
    return self->name;
}

int animalGetAge(Animal self)
{
    return self->age;
}

char *animalGetType(Animal self)
{
    return self->type;
}