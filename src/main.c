#include "../incl/dog.h"
#include "../incl/human.h"
#include "malloc.h"
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    Animal *animal;

    Dog *dog = dogCreate("doge", 10);
    animal = (Animal*)dog;
    animalSay(animal);

    Human *human = humanCreate("ZhangSan", 25, 111);
    animal = (Animal *)human;
    animalSay(animal);

    return 0;
}