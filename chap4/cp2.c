#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    while (a<=100)
    {
        // a=11;
        // while(a>10){  => these two lines will lead to infinit loop
        printf("%d\n",a );
        a++;
    }
    
    return 0;
} 