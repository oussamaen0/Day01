#include <stdio.h>

int main() 
{
int c,a,b;
printf("give me a :");
scanf("%d", &a);
printf("give me b :");
scanf("%d", &b);
if (a == b)
{
c  = (a + b) * 3;
printf("resultat %d", c);
}
else
{
     c = a + b;
        printf("resultat %d\n", c);
}
return(0);
}