#include <stdio.h>

int main()
{
    int physics,maths,chemistry;
    float total;
    printf("Enter physics marks\n");
    scanf("%d",&physics);

     printf("Enter maths marks\n");
    scanf("%d",&maths);

     printf("Enter chemistry marks\n");
    scanf("%d",&chemistry);
    total = (physics + maths + chemistry)/3;
    if ((total<40) || physics<33 || maths<33 || chemistry<33)
    {
        // printf("Your total percantage is %d and you are fail\n",(int)total); type casting

        printf("Your total percantage is %f and you are fail\n",total);
    }
    else
    {
        printf("Your total percantage is %f and you are pass\n",total);
        
    }
    

    return 0;
}