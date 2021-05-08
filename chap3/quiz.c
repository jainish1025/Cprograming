//  switch case statement //

#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your grade 100-70\n");
    scanf("%d", &grade);

    switch (grade/10)
    {
    case 1:
        printf("your grade is a\n",90-100);
        break;

    case 2:
        printf("your grade is b\n",80-90);
        break;

    case 3:
        printf("your grade is c\n",70-80);
        break;

    case 4:
        printf("your grade is d\n",60-70);
        break;

    case 5:
        printf("your grade is f\n",60);
        break;    

    default:
        printf("Your grade 100-70 you pass");
        break;

    }
    return 0;
}