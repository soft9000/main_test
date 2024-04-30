cc=gcc
opts = -v
link = gcc

all: main_test2.run main_test.run Makefile

main_test2.run: main_test.c
	$(cc) $(opts) -c main_test.c
	gcc  main_test.o -o main_test2.run 
	rm -f main_test.o
	
main_test.run: main_test.c
	gcc main_test.c -o main_test.run

clean:
	rm -f *.o
	rm -f *.run

