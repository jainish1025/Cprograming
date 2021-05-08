/* quize write a program to print natural number from 10 t0 20 when intial loop counter is intialigel to 0  */

#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }
        i++; // i=i+1; is a increase by 1
    }

    return 0;
}