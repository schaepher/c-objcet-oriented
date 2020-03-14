#include "../incl/animal.h"

struct _Animal
{
    AnimalVtb *vptr;
    char *type;
    char *name;
    int age;
};

void animalInit(Animal this, AnimalVtb *vptr, char *type, char *name, int age)
{
    this->vptr = vptr;
    this->type = type;
    this->name = name;
    this->age = age;
}

void animalSay(Animal this)
{
    (*this->vptr->say)(this);
}

char *animalGetName(Animal this)
{
    return this->name;
}

int animalGetAge(Animal this)
{
    return this->age;
}

char *animalGetType(Animal this)
{
    return this->type;
}