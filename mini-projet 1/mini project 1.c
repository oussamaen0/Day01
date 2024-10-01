#include <stdio.h>
#define MAX 100


int chercherLivre(char titre[MAX][100], char auteur[MAX][100], float prix[MAX], int quantite[MAX], int nbr, char chercher[100]) {
    for (int i = 0; i < nbr; i++) {
        int j = 0;
        while (titre[i][j] != '\0' && chercher[j] != '\0' && titre[i][j] == chercher[j]) {
            j++;
        }
        if (titre[i][j] == '\0' && chercher[j] == '\0') {

            printf("---------- Livre est Trouve ----------\n");
            printf("Titre : %s\n", titre[i]);
            printf("Auteur : %s\n", auteur[i]);
            printf("Prix : %.2f\n", prix[i]);
            printf("Quantite : %d\n", quantite[i]);
            return i;
        }
    }
    return -1;
}

int main() {
    char titre[MAX][100];
    char auteur[MAX][100];
    float prix[MAX];
    int quantite[MAX];
    int nbr = 0, choix;

    do {
        printf("\nMenu: \n");
        printf("1. Ajouter des livres\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Rechercher et supprimer un livre\n");
        printf("6. Afficher nombre Totale des livres\n");
        printf("7. Quitter\n");
        printf("Choix ? : ");
        scanf("%d", &choix);

        switch (choix) {
        case 1: {
            int ajout;
            printf("antrer Nombre de livres a ajouter : ");
            scanf("%d", &ajout);
            printf("====================== Ajout =====================\n");
            for (int i = nbr; i < nbr + ajout; i++) {
                printf("Titre : ");
                scanf(" %[^\n]", titre[i]);
                printf("Auteur : ");
                scanf(" %[^\n]", auteur[i]);
                printf("Prix : ");
                scanf("%f", &prix[i]);
                printf("Quantite : ");
                scanf("%d", &quantite[i]);
                printf("\n");
            }
            nbr += ajout;
            break;
        }
        case 2: {
            if (nbr == 0) {
                printf("pas de livres dans Stock");
            } else {
                printf("===================== Afficher Le Stock ======================\n");
                for (int i = 0; i < nbr; i++) {
                    printf("Titre : %s\n", titre[i]);
                    printf("Auteur : %s\n", auteur[i]);
                    printf("Prix : %.2f\n", prix[i]);
                    printf("Quantite : %d\n", quantite[i]);
                    printf("\n");
                }
            }
            break;
        }
        case 3: {
            char chercher[100];
            printf("===================== Chercher Un Livre ======================\n");
            printf("Titre : ");
            scanf(" %s", chercher);
            int index = chercherLivre(titre, auteur, prix, quantite, nbr, chercher);
            if (index == -1) {
                printf("Livre pas Trouve\n");
            }
            break;
        }
        case 4: {
            char chercher[100];
            printf("===================== Chercher Un Livre ======================\n");
            printf("Titre : ");
            scanf(" %s", chercher);
            int index = chercherLivre(titre, auteur, prix, quantite, nbr, chercher);
            if (index != -1) {
                printf("===================== Modification ======================\n");
                int mod;
                printf("Donne Moi la Nouvelle Quantite : ");
                scanf("%d", &mod);
                quantite[index] = mod;
            } else {
                printf("Livre pas Trouve\n");
            }
            break;
        }
        case 5: {
            char chercher[100];
            printf("===================== Suppression ======================\n");
            printf("Titre : ");
            scanf(" %s", chercher);
            int index = chercherLivre(titre, auteur, prix, quantite, nbr, chercher);
            if (index != -1) {

                for (int k = index; k < nbr - 1; k++) {
                    for (int l = 0; l < 100; l++) {
                        titre[k][l] = titre[k + 1][l];
                        auteur[k][l] = auteur[k + 1][l];
                    }
                    prix[k] = prix[k + 1];
                    quantite[k] = quantite[k + 1];
                }
                nbr--;
                printf("Livre a ete Supprimer\n");
            } else {
                printf("Livre pas Trouve\n");
            }
            break;
        }
        case 6: {
            printf("Le Nombre Totale des Livres est : %d\n", nbr);
            break;
        }
        case 7: {
            return 1;
        }
        default:
            printf("Choix Invalide\n");
            break;
        }
    } while (choix < 7);

    return 0;
}
