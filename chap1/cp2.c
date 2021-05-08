#include <stdio.h>

int main()
{
    int a = 3; // int b =3.5 is not recommended because 3.5 is not an integer.
    float b = 3.5;  // its is recommended
    char c = 'v';
    int d = 45;
    int e = 45 + 9;
    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);
    printf("sum of a and d is %d\n", a + d);
    printf("sum of a and d is %d\n", e);

    return 0;
}