#include <stdio.h>
#include <math.h>
int main() 
{
float a,b,c,moyg;
printf("give me number1 : ");
scanf("%f", &a);
printf("give me number2 : ");
scanf("%f", &b);
printf("give me number3 : ");
scanf("%f", &c);

moyg = (pow(a*b*c,0.33));
printf("%.2f" ,moyg);

return(0);
}