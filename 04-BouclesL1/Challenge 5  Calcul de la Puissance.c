#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, p, i, rs = 1;
        printf("entre le nombre : ");
            scanf(" %d", &n);
        printf("entre la puissance : ");
            scanf(" %d", &p);
    for(i = 1 ; i <= p ; i++)
                        rs = rs * n;
        printf("la resultat est = %d",rs);
    return 0;
}