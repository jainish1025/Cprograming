// if, else statement
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age <= 90) 
    // if (age >= 90)

    {
        printf("Your are above 90, you cannot drive");
    }
    else
    {
        printf("You can drive\n");
    }

    if (age==50)
    {
        printf("Half century\n");

    }
    
    return 0;
}