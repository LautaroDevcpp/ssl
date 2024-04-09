#include <stdio.h>
 
int main()
{
    // using printf to print "Hello Geek!"

    FILE* f = fopen("HelloWord.txt","a");

    fprintf(f,"Hello, Lautaro!");

    return 0;
}