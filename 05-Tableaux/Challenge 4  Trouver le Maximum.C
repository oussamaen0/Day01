#include <stdio.h>

int main() 
{
    int size, number,max;
        printf("entre la taille de tablaux : ");
        scanf("%d", &size);
        int tab[size];
            for(int i = 0; i < size; i++)
            {
                printf("entre you number : ");
                scanf("%d", &number);
                tab[i] = number;
            }
            for(int i = 0; i < size; i++){
                if (tab[i]>max){
                max = tab[i];    
                }

            }
            printf("la max de your number est : %d ", max);
    return 0;
}