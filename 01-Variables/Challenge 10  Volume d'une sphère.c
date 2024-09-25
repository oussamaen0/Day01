#include <stdio.h>
#include <math.h>
int main() 
{
float r,volum;
printf("give me r : ");
scanf("%f", &r);

volum = ( (1.33) * 3.14 * pow(r,3));
printf("%.2f" ,volum);

return(0);
}