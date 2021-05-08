#include <stdio.h> // valide and invalid

int main()
{
    // int a; b=a; invalid statement
    int a;
    int b = a;     // valid statement
    int v = 3 ^ 3; // valide statement
    char dt = '2'; // invalid statement because 2 is integer not a character
    printf("%d", v);
    return 0;
}