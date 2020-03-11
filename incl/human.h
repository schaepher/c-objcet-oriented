#ifndef __OBJ_HUMAN__
#define __OBJ_HUMAN__

#include "animal.h"

typedef struct _Human *Human;

Human humanCreate(char *name, int age, int id);

char *humanGetName(Human human);
int humanGetAge(Human human);
int humanGetId(Human human);
void humanSay(void *human);

#endif