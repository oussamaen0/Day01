#include <stdio.h>

int main() 
{
float ms,Kmh,x=0.27778;

printf("give me the vitesse en kilometers/heur to turns it into metre/seconde  :");
scanf("%f", &Kmh);
ms = Kmh * 0.27778;
printf("%f=%f*%f",ms,Kmh,x);
return(0);
}
