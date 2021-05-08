//  finding greater value

#include <stdio.h>

int main()
{
   
       int num1,num2,num3,num4;
    printf("Enter the four number\n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    if (num1>num2 && num1>num3 && num1>num4)
    {
        printf("num1 is greater\n");
    }
    if (num2>num1 && num2>num3 && num2>num4)
    {
        printf("num2 is greater\n");
    }
    if (num3>num1 && num3>num2 && num3>num4)
    {
        printf("num3 is greater\n");
    }
    if (num4>num1 && num4>num2 && num4>num3)
    {
        printf("num4 is greater\n");
    }
    
    //     int num1,num2,num3,num4;     find the smaller value 
    // printf("Enter the four number\n");
    // scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    // if (num1<num2 && num1<num3 && num1<num4)
    // {
    //     printf("num1 is smaller\n");
    // }
    // if (num2<num1 && num2<num3 && num2<num4)
    // {
    //     printf("num2 is smaller\n");
    // }
    // if (num3<num1 && num3<num2 && num3<num4)
    // {
    //     printf("num3 is smaller\n");
    // }
    // if (num4<num1 && num4<num2 && num4<num3)
    // {
    //     printf("num4 is smaller\n");
    // }

    return 0;
}