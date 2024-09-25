#include <stdio.h>

int main() 
{
char x;
printf("give a caracter  i will tell you if the caracter is alphabet or no : ");
scanf("%c", &x);
if (65 <= x && x <= 90)
{printf("your caracter is alphabet and uppercase");}
else if (97 <= x && x <= 122)
{printf("your caracter is alphabet and lowercase");}
else
{printf("its not a alphabet");}
return(0);
}