#include <stdio.h>

int main() 
{
float c;
printf("give me the temperature in Celsius and displays the state of the water at that temperature  :");
scanf("%f", &c);
if (c < 0)
{
printf("solide");
}
else if(0 <= c && c < 100)
{
printf("liquide");
}

else
{
    printf("gaz");
}
return(0);
}