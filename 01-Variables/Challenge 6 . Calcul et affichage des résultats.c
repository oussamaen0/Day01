#include <stdio.h>

int main() 
{
    float a,b;
    char c;
    printf("give me number a : ");
    scanf("%f",&a);
    printf("give me number symbole : ");
    scanf(" %c",&c);
    printf("give me number b : ");
    scanf("%f",&b);
    switch(c)
    {
        case '+' : printf("a + b = %.2f", a + b);
        break;
        case '-' : printf("a - b = %.2f", a - b);
        break;
        case '*' : printf("a * b = %.2f", a * b);
        break;
        case '/' : printf("a / b = %.2f", a / b);
        break;
    }
    
return(0);
}