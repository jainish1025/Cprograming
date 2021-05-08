//  ternery lessthan 0r not lessthen

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    //  one liner statement

    (a < 5) ? printf("A is less than 5") : printf("A is notless than 5");
    return 0;
}