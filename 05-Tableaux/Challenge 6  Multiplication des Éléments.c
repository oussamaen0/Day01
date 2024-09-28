// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int size,mult;
        printf("entre size de tablaux : ");
        scanf("%d",&size);
    int tab[size];
    int N;
        for(int i = 0; i < size;i++){
            printf("entre les nombre : ");
            scanf("%d",&N);
            tab[i] = N;
        }
        printf("entre le nombre : ");
        scanf("%d",&mult);
       for(int i = 0; i < size;i++){
        tab[i] *= mult;
        printf("%d\n",tab[i]);}
        
        return 0;
}