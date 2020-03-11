#ifndef __OBJ_ANIMAL__
#define __OBJ_ANIMAL__

typedef struct AnimalVtb {
    void (*say)(void *self);
} AnimalVtb;

typedef struct Animal
{
    AnimalVtb *vptr;
    char *type;
    char *name;
    int age;
} Animal;

void animalInit(Animal *self, AnimalVtb *vptr ,char* type, char* name, int age);

void animalSay(Animal *self);

char* animalGetName(Animal *self);

int animalGetAge(Animal *self);

char* animalGetType(Animal *self);

#endif