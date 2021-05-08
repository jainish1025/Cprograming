#include <stdio.h> // the formula of celsius temperature in fahrenheit (12°C × 9/5) + 32 = 53.6°F


int main()
{
     float celsius=37,far;
     far=(celsius* 9/5)+32;
     printf("The value of this celsius temperature in fahrenhit is %f",far);
    return 0;
}