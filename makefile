# -*- Makefile -*-


CC=gcc
AR=ar
OBJECTS_LIB = basicMath.o power.o
FLAGS= -Wall -g

all: mymaths mymathd mains maind
	
mains: main.o libmyMath.a 
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind: main.o
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

mymaths: libmyMath.a

mymathd: libmyMath.so

libmyMath.a: $(OBJECTS_LIB) myMath.h
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB) myMath.h

libmyMath.so: $(OBJECTS_LIB) myMath.h
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB) myMath.h
	

basicMath.o: basicMath.c
	$(CC) $(FLAGS) -c basicMath.c

power.o: power.c
	$(CC) $(FLAGS) -c power.c

main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
