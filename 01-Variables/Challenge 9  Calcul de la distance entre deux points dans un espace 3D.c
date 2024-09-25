#include <stdio.h>
#include <math.h>
int main() 
{
float a,b,c,A,B,C,dist;
printf("give me x : ");
scanf("%f", &a);
printf("give me y : ");
scanf("%f", &b);
printf("give me z : ");
scanf("%f", &c);
printf("give me x1 : ");
scanf("%f", &A);
printf("give me y1 : ");
scanf("%f", &B);
printf("give me z1: ");
scanf("%f", &C);

dist = sqrt((pow(A + a,2) + pow(B + b,2) + pow(C + c,2))) ;
printf("%.2f" ,dist);

return(0);
}