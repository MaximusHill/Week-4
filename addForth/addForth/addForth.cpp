/* Functions - passing by value */

#include <stdio.h>
#include <stdlib.h>

/* Prototypes (Decelerations) */

/* No params and void return */
void printLine();
void printAnswer(int);
/* Three params and a return */
int addThree(int, int, int);
int addForth(int, int, int,int);

int main(int argc, char** argv)
{
    int x = 10;
    int y = 20;
    int z = 30;
    int f = 40;

    /* Calling addThree */
    int sum = addThree(x, y, z);
    int sum2 = addForth(x, y, z,f);
    /* Calling printLine */
    printLine();

    printf("Answer: %d\n", sum);
    printAnswer(sum2);
    printLine();
}
/* Function Bodies (Definitions) */
void printLine()
{
    printf("*********************************");
    /* void function has no return */
}

int addThree(int a, int b, int c)
{
    /* local variable */
    int total = a + b + c;

    /*  must return an int */
    return total;
}
int addForth(int a, int b, int c,int d)
{
    int total = a + b + c + d;
    return total;
}
void printAnswer(int a)
{
    printf("%d",a);
}