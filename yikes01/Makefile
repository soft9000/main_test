cc=gcc -v
opts = 
link = ld
ifdef OS
	libs = -LC:/Windows/System32 -l kernel32 -l mingw32 -l crtdll 
else
	libs = -lc
endif

all: main_test2.run main_test.run Makefile

main_test2.run: main_test.c
	$(cc) $(opts) -c main_test.c
	$(link) -o main_test2.run $(libs) main_test.o
	rm -f main_test.o

# Type in on Windows 10, work fine. Use in Makefile, nope.	
main_test.run: main_test.c
	gcc -o main_test.run main_test.c

clean:
	rm -f *.o
	rm -f *.run

