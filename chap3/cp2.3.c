#include <stdio.h>

int main()
{
    int age;
    printf("Enter you age\n");
    scanf("%d",&age);
    printf("You have entered %d as you age\n",age);
    if (age>=18)
    {
        printf("You can vot");
    }
    else if (age>10){
    printf("You are between 10 to 18 yo can vot for kids");
        
    }
    else{
    
        printf("You cannot vot");
    }
    
    return 0;
} 