#include <stdio.h>

int main() {
    int size1;
    printf("Entrez la taille du premier tableau : ");
    scanf("%d", &size1);
    
    int tab1[size1];
    for (int i = 0; i < size1; i++) {
        printf("Entrez un nombre pour tab1 : ");
        scanf("%d", &tab1[i]);
    }

    int size2;
    printf("Entrez la taille du deuxième tableau : ");
    scanf("%d", &size2);
    
    int tab2[size2];
    for (int i = 0; i < size2; i++) {
        printf("Entrez un nombre pour tab2 : ");
        scanf("%d", &tab2[i]);
    }

    int tab3[size1 + size2]; 
    for (int i = 0; i < size1; i++) {
        tab3[i] = tab1[i]; 
    }
    for (int i = 0; i < size2; i++) {
        tab3[size1 + i] = tab2[i]; 
    }

    printf("Tableau fusionné : ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", tab3[i]);
    }
    printf("\n");

    return 0;
}