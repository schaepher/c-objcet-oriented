#ifndef __OBJ_DOG__
#define __OBJ_DOG__

#include "animal.h"

typedef struct _Dog *Dog;

Dog dogCreate(char *name, int age);

char *dogGetName(Dog this);
int dogGetAge(Dog this);
void dogSay(void *this);

#endif