// c program to check whether a number is even or odd \\

#include <stdio.h> // if basice statmenent

int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);

    if (a % 2 == 0)  // i can use 2,4,6,8etc
    // if (a % 4 == 0)  i can use 4,8,12,16 etc

    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }

    return 0;
}