// increment operators

#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value after i++ is %d\n", i++); // it print 5;

    // printf("The value after i++ is %d\n", ++i); it print 6;
     i++; // means firstr print then increment
     ++i; // means first increment then print
    printf("The value of i is %d\n", i);

    i+=10; // increment i by 10
    printf("The value of i is %d\n", i);

    return 0;
}