// write a program to find lower case or not a to z//

#include <stdio.h>

int main()
{
    // 97-122 =a-z ASCII value //

    char ch;
    printf("Enter the charecter\n");
    scanf("%c",&ch);
    if (ch<=122 && ch>=97)
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not lower case");
    }
    
    
    
    return 0;
}