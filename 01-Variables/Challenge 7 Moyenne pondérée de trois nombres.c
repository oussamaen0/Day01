#include <stdio.h>

int main() 
{
float a,b,c,moy;
printf("give me your note : ");
scanf("%f", &a);
printf("give me your note : ");
scanf("%f", &b);
printf("give me your note : ");
scanf("%f", &c);

moy = ((a*2)+(b*3)+(c*5))/10;
printf("%.2f" ,moy);

return(0);
}