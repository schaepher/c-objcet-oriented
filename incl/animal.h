#ifndef __OBJ_ANIMAL__
#define __OBJ_ANIMAL__

typedef struct AnimalVtb {
    void (*say)(void *this);
} AnimalVtb;

typedef struct _Animal *Animal;

void animalInit(Animal this, AnimalVtb *vptr ,char* type, char* name, int age);

void animalSay(Animal this);

char* animalGetName(Animal this);

int animalGetAge(Animal this);

char* animalGetType(Animal this);

#endif