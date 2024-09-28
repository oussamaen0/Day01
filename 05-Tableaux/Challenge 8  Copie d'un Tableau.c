#include <stdio.h>

int main() {
    int size;
        printf("entre size de tablaux : ");
        scanf("%d",&size);
    int origine[size];
    int N;
        for(int i = 0; i < size;i++){
            printf("entre les nombre : ");
            scanf("%d",&N);
            origine[i] = N;}
    int copy[size];
    printf("les elements de tableau Copy : ");
    for (int i = 0; i < size;i++){
            copy[i] = origine[i];
            printf("%d ,",copy[i]);
    }
        return 0;
}