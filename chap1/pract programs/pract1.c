#include <stdio.h>

int main()
{
    // int length=4,breadth=9;
    // int area = length * breadth;
    // printf("The area of this rectangle is %d",area);

    int length, breadth;
    printf("What is the length of the rectangle \n");
    scanf("%d", &length);
    
    printf("What is the breadth of the rectangle  \n");
    scanf("%d",& breadth);
    printf("The area of your rectangle is%d", length * breadth);
    return 0;
}