#include <stdio.h>

int main() {
    int size, rechercher;
    printf("entre size de tablaux : ");
    scanf("%d", &size);

    int tab[size];
    int N;

    for (int i = 0; i < size; i++) {
        printf("entre les nombre : ");
        scanf("%d", &N);
        tab[i] = N;
    }

    printf("entre nombre found : ");
    scanf("%d", &rechercher);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (rechercher == tab[i]) {
            found = 1;
            printf("Nombre trouvé : %d ", rechercher);
        }
    }

    if (!found) {
        printf("Nombre non trouvé dans le tableau.\n");
    }

    return 0;
}
