#include <stdio.h>

int main() 
{
float yards,Km,x=1093.61;

printf("give me the distance in kilometers to turns it into yards  :");
scanf("%f", &Km);
yards = Km * 1093.61;
printf("%f=%f*%f",yards,Km,x);
return(0);
}
