#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float f, i;
    int number;
        printf("put your number : ");
        scanf(" %d", &number);
            if (number < 0)
                {printf("give me a positiv number");}
            else if (number == 0)
                {printf("la factorielle est : 1 ");}
            else {
                f = 1;
                    for(i = 1 ; i <= number ; i++)
                        f = f * i;
                        printf("la factorielle de %d est = %.2f",f,number);
                    }
    return 0;
}