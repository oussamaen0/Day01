#include <stdio.h>

int main() 
{
char x;
printf("give me alphabet i will tell you if alphabet is uppercase and lowercase : ");
scanf("%c", &x);
if (65 <= x && x <= 90)
{printf("alphabet is uppercase");}
else
{printf("alphabet is lowercase");}
return(0);
}