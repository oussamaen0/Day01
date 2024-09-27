#include <stdio.h>

int main() 
{
    int size, number,min;
        printf("entre la taille de tablaux : ");
        scanf("%d", &size);
        int tab[size];
            for(int i = 0; i < size; i++)
            {
                printf("entre you number : ");
                scanf("%d", &number);
                tab[i] = number;
            }
            min = tab[0];
            for(int i = 0; i < size; i++){
                if (tab[i]<min){
                    min = tab[i];    
                }

            }
            printf("la min de your number est : %d ", min);
    return 0;
}