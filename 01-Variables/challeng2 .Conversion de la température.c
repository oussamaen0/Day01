#include <stdio.h>

int main() 
{
float k,c,x=273.15;

printf("give me the température in your city  :");
scanf("%f", &c);
k= c + 273.15;
printf("%f=%f+%f",k,c,x);
return(0);
}