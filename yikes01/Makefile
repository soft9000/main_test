cc=gcc -v
opts = 
link = ld

ifdef OS
	libs = -LC:/Windows/System32 -lkernel32 -lmingw32 -lcrtdll 
else
	libs = -lc
endif

all: main_test2.run main_test.run Makefile

# First function becomes void main(void) ...
main_test2.run: main_test.c
	$(cc) $(opts) -c main_test.c
	$(link)  main_test.o -o main_test2.run $(libs)
	rm -f main_test.o
	
main_test.run: main_test.c
	gcc main_test.c -o main_test.run

clean:
	rm -f *.o
	rm -f *.run

