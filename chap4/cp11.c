//   break loop 
#include <stdio.h>

int main()
    
{ 
    int i=0;
    do
    {
        printf("The value of i is %d\n",i);
        if (i==4)   // it will print 0 to 4
        {
            break; 
        }
        i++;
        
    } while (i<=10);  // it will print 0 to 10 

//  Example:

    // for ( i = 0; i < 1000; i++)
    // {
    //     printf("%d\n",i);
    //     if (i==5)
    //     {
    //         break;
    //     }
        
    // }
    
    return 0;
}
