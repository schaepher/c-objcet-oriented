home=.
INCLUDE="-I ${home}/incl"
FLAGS=-c -Wall -O2 -static-libgcc -std=c11

# .SUFFIXES: .c
# .c.o:
# 	gcc ${INCL} -c ${home}/src/ $<

all: animal dog human main
	gcc -o bin/main.exe bin/animal.o bin/dog.o bin/human.o bin/main.o

main:
	gcc ${INCLUDE} ${FLAGS} -o bin/main.o src/main.c

animal: src/animal.c
	gcc ${INCLUDE} ${FLAGS} -o bin/animal.o src/animal.c

dog: src/dog.c
	gcc ${INCLUDE} ${FLAGS} -o bin/dog.o src/dog.c

human: src/human.c
	gcc ${INCLUDE} ${FLAGS} -o bin/human.o src/human.c

clean:
	rm -f bin/*
