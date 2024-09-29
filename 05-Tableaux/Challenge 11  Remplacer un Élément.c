#include <stdio.h>

int main() {
    int size, rechercher,remplacer;
    printf("entre size de tablaux : ");
    scanf("%d", &size);

    int tab[size];
    int N;

    for (int i = 0; i < size; i++) {
        printf("entre les nombre : ");
        scanf("%d", &N);
        tab[i] = N;
    }

    printf("entre le nombre you wanna remplace : ");
    scanf("%d", &rechercher);
    int i;
    int found = 0;
    for ( i = 0; i < size; i++) {
        if (rechercher == tab[i]) {
            found = 1;
            printf("entre your new number : ");
            scanf("%d", &remplacer);
            tab[i] = remplacer;
            for ( i = 0; i < size; i++){
    printf("%d , ",tab[i]);}

        }
    }
    if (!found) {
        printf("Nombre non trouve dans le tableau.\n");
    }

    return 0;
}