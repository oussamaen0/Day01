#include <stdio.h>

int main() 
{
float x;
printf("give your note : ");
scanf("%f", &x);
if (x < 10)
{printf("recalé");}
else if (10 <= x && x < 12)
{printf("mention passable");}
else if (12 <= x && x < 14)
{printf("mention assez bien");}
else if (14 <= x && x < 16)
{printf("mention bien");}
else
{printf("mention très bien");}
return(0);
}