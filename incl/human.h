#ifndef __OBJ_HUMAN__
#define __OBJ_HUMAN__

#include "animal.h"

typedef struct _Human *Human;

Human humanCreate(char *name, int age, int id);

char *humanGetName(Human this);
int humanGetAge(Human this);
int humanGetId(Human this);
void humanSay(void *this);

#endif