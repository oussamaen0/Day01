#include <stdio.h>

int main() 
{
float a;
printf("give me the number i will tell you if the number is positive or negative or null : ");
scanf("%f", &a);
if (a < 0)
{printf("number is negative");}
else if (a > 0)
{printf("number is positive");}
else
{printf("number is null");}
return(0);
}