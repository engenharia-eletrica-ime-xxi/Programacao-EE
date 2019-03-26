/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 3;
    printf("Subtitles: D = dark, W = white, and the other letters are the pieces. \n");
    printf("________________________________________________________\n");
    printf("| D R || W N || D B || W Q || D K || W B || D N || W R | \n" );
    printf("________________________________________________________\n");
    printf("| W p || D p || W p || D p || W p || D p || W p || D p | \n");
    while (i != -1)
    {
        printf("________________________________________________________\n");
        if (i%2)
        {
            printf("| D   || W   || D   || W   || D   || W   || D   || W   | \n" );
        }
        else
        {
            printf("| W   || D   || W   || D   || W   || D   || W   || D   | \n" );
        }
        i--;
    }
    printf("________________________________________________________\n");
    printf("| D p || W p || D p || W p || D p || W p || D p || W p | \n");
    printf("________________________________________________________\n");
    printf("| W R || D N || W B || D Q || W K || D B || W N || D R | \n");
    printf("________________________________________________________\n");
    return 0;
}
