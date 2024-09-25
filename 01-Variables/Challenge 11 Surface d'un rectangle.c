#include <stdio.h>
#include <math.h>
int main() 
{
float Surface,LONG,LARG ;
printf("give me largeur du rectangle : ");
scanf("%f", &LARG);
printf("give me longueur du rectangle : ");
scanf("%f", &LONG);

Surface = LARG * LONG;
printf("%.2f" ,Surface);

return(0);
}