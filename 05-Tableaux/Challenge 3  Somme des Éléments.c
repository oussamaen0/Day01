#include <stdio.h>

int main() 
{
    int size, number,somme;
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
                    somme+=tab[i];
                     {
                        printf("la somme de your number est : %d ", somme);
                    }
    return 0;
}