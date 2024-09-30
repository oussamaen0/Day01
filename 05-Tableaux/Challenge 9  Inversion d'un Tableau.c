#include <stdio.h>

int main() {
    int size;
        printf("entre size de tablaux : ");
        scanf("%d",&size);
    int tab[size];
    int N;
        for(int i = 0; i < size;i++){
            printf("entre les nombre : ");
            scanf("%d",&N);
            tab[i] = N;
        }
       for(int i = size-1; i >= 0;i--){
        printf("%d\n",tab[i]);}
        
        return 0;
}