// if,else logical operator

#include <stdio.h>

int main()
{
    int age;
    int vippass =0;
    // vippass=1;
    printf("Enter your are\n");
    scanf("%d", &age);

    // if (age <= 70 && age >=18) 

    if ((age <= 70 && age>=18)|| vippass==1) // !(vippass==1) its become ture

    {
        printf("Your are above 18 and bellow 70 you can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }

    return 0;
}