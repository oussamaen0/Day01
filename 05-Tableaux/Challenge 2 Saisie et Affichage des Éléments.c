#include <stdio.h>

int main() 
{
    int size, number;
        printf("entre la taille de tablaux : ");
        scanf("%d", &size);
        int tab[size];
            for(int i = 0; i < size; i++)
                {
                    printf("entre you number : ");
                    scanf("%d", &number);
                        tab[i] = number;
                }
                    for(int i = 0; i < size; i++)
                     {
                        printf("%d , ", tab[i]);
                    }
    return 0;
}