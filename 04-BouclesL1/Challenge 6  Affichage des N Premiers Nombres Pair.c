#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, y;
        printf("give me number : ");
        scanf("%d", &n);
             y = 2;
        for(i = 1; i <= n ; i++)
        {
            printf("%d\n",y);
            y+=2;
        }
    return 0;
}