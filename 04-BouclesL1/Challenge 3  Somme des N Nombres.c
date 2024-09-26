#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int s, i;
    int number;
        printf("put your number : ");
        scanf(" %d", &number);
            if (number < 0)
                {printf("give me a positiv number");}
            else
                s = 0;
                    for(i = 0 ; i <= number ; i++)
                        s = s + i;
                        printf("la factorielle de %d est = %.d",s,number);
    return 0;
}