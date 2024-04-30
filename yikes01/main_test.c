#include <stdio.h>


void myFunc() /* assumes integer return */
{
    puts("Greetings, Code 'Mon ...");
}

int main(int argc, char *argv[])
{
    puts("zMain 01.\n");
    myFunc();
    puts("zMain 02.\n");
}


