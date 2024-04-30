cc=gcc -v -std=gnu11
opts = 
link = ld
ifdef OS
	libs = --enable-stdcall-fixup -LC:/Windows/System32 -l kernel32 -l mingw32 -l crtdll 
else
	libs = -lc
endif

all: main_test2.run main_test.run Makefile

main_test2.run: main_test.c
	echo
	$(cc) $(opts) -c main_test.c
	$(link) -o main_test2.run $(libs) main_test.o
	echo
	
main_test.run: main_test.c
	echo
	$(cc) $(opts) main_test.c -o main_test.run
	echo

# ::::: GNU-Style Library :::::
justalib.a: $(objs)
	ar rcs justalib.a $(objs)

clean:
	rm -f *.o
	rm -f *.run

