#include <stdio.h>
#include <string.h>

#define MAX_RESERVATIONS 100
#define MAX_NAME_LENGTH 100
#define MAX_PHONE_LENGTH 25
#define MAX_STATUS_LENGTH 50

int main() {
    char noms[MAX_RESERVATIONS][MAX_NAME_LENGTH] = {
        "salah eddin", "hamza", "anass", "youssef", "ilyass",
        "othmane", "ayoub", "marouane", "oussama", "mohamed"
    };
    char prenoms[MAX_RESERVATIONS][MAX_NAME_LENGTH] = {
        "bahter", "el boukri", "el fardous", "boukri", "hiyan",
        "el korri", "hissni", "bichara", "en-naji", "amid"
    };
    char telephones[MAX_RESERVATIONS][MAX_PHONE_LENGTH] = {
        "0623234567", "0766453412", "0789563412", "0644356789", "0678921234",
        "0712456789", "0689452345", "0788782345", "0656451234", "0789342356"
    };
    int ages[MAX_RESERVATIONS] = {19, 24, 22, 35, 28, 40, 18, 50, 33, 29};
    char statuts[MAX_RESERVATIONS][MAX_STATUS_LENGTH] = {
        "valide", "annule", "reporte", "traite", "valide",
        "annule", "reporte", "traite", "valide", "annule"
    };
    int references[MAX_RESERVATIONS];
    int nbrReservations = 10;
    int choix;

    for (int i = 0; i < nbrReservations; i++) {
        references[i] = i + 1;
    }

    do {
        printf("\nMenu: \n");
        printf("1. Ajouter une reservation\n");
        printf("2. Afficher toutes les reservations\n");
        printf("3. Rechercher une reservation\n");
        printf("4. Modifier une reservation\n");
        printf("5. Supprimer une reservation\n");
        printf("6. Afficher les statistiques\n");
        printf("7. Quitter\n");
        printf("Choix ? : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                if (nbrReservations >= MAX_RESERVATIONS) {
                    printf("Le maximum de reservations a ete atteint.\n");
                } else {
                    printf("Nom: ");
                    scanf(" %[^\n]", noms[nbrReservations]);
                    printf("Prenom: ");
                    scanf(" %[^\n]", prenoms[nbrReservations]);
                    printf("Telephone: ");
                    scanf(" %s", telephones[nbrReservations]);
                    printf("Age: ");
                    scanf("%d", &ages[nbrReservations]);
                    printf("Statut (valide, annule, reporte, traite): ");
                    scanf(" %s", statuts[nbrReservations]);

                    references[nbrReservations] = nbrReservations + 1;
                    nbrReservations++;
                    printf("Reservation ajoutee avec succes !\n");
                }
                break;
            }

            case 2: {
                printf("\nListe des reservations:\n");
                for (int i = 0; i < nbrReservations; i++) {
                    printf("Reference: %d\n", references[i]);
                    printf("Nom: %s\n", noms[i]);
                    printf("Prenom: %s\n", prenoms[i]);
                    printf("Telephone: %s\n", telephones[i]);
                    printf("Age: %d\n", ages[i]);
                    printf("Statut: %s\n", statuts[i]);
                    printf("\n");
                }
                break;
            }

            case 3: {
                int refRecherchee;
                printf("Entrez le numero de reference a rechercher: ");
                scanf("%d", &refRecherchee);

                int trouve = 0;
                for (int i = 0; i < nbrReservations; i++) {
                    if (references[i] == refRecherchee) {
                        printf("===================== Reservation ======================\n");
                        printf("Reference: %d\n", references[i]);
                        printf("Nom: %s\n", noms[i]);
                        printf("Prenom: %s\n", prenoms[i]);
                        printf("Telephone: %s\n", telephones[i]);
                        printf("Age: %d\n", ages[i]);
                        printf("Statut: %s\n", statuts[i]);
                        printf("\n");
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) {
                    printf("Aucune reservation trouvee avec la reference %d.\n", refRecherchee);
                }
                break;
            }

            case 4: {
                int refRecherchee;
                printf("Entrez le numero de reference a modifier: ");
                scanf("%d", &refRecherchee);

                int trouve = 0;
                for (int i = 0; i < nbrReservations; i++) {
                    if (references[i] == refRecherchee) {
                        printf("===================== Modification ======================\n");
                        printf("Nom actuel: %s\n", noms[i]);
                        printf("Nouvelle valeur pour Nom: ");
                        scanf(" %[^\n]", noms[i]);
                        printf("Prenom actuel: %s\n", prenoms[i]);
                        printf("Nouvelle valeur pour Prenom: ");
                        scanf(" %[^\n]", prenoms[i]);
                        printf("Telephone actuel: %s\n", telephones[i]);
                        printf("Nouvelle valeur pour Telephone: ");
                        scanf(" %s", telephones[i]);
                        printf("Age actuel: %d\n", ages[i]);
                        printf("Nouvelle valeur pour Age: ");
                        scanf("%d", &ages[i]);
                        printf("Statut actuel: %s\n", statuts[i]);
                        printf("Nouvelle valeur pour Statut: ");
                        scanf(" %s", statuts[i]);

                        printf("Reservation modifiee avec succes !\n");
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) {
                    printf("Aucune reservation trouvee avec la reference %d.\n", refRecherchee);
                }
                break;
            }

            case 5: {
                int refRecherchee;
                printf("Entrez le numero de reference a supprimer: ");
                scanf("%d", &refRecherchee);

                int trouve = 0;
                for (int i = 0; i < nbrReservations; i++) {
                    if (references[i] == refRecherchee) {
                        for (int j = i; j < nbrReservations - 1; j++) {
                            references[j] = references[j + 1];
                            strcpy(noms[j], noms[j + 1]);
                            strcpy(prenoms[j], prenoms[j + 1]);
                            strcpy(telephones[j], telephones[j + 1]);
                            ages[j] = ages[j + 1];
                            strcpy(statuts[j], statuts[j + 1]);
                        }
                        nbrReservations--;
                        printf("Reservation supprimee avec succes !\n");
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) {
                    printf("Aucune reservation trouvee avec la reference %d.\n", refRecherchee);
                }
                break;
            }

            case 6: {
                int countUnder18 = 0, count19To35 = 0, count36Plus = 0;
                int countValide = 0, countAnnule = 0, countReporte = 0, countTraite = 0;

                for (int i = 0; i < nbrReservations; i++) {
                    if (ages[i] < 18) {
                        countUnder18++;
                    } else if (ages[i] >= 19 && ages[i] <= 35) {
                        count19To35++;
                    } else {
                        count36Plus++;
                    }

                    if (strcmp(statuts[i], "valide") == 0) {
                        countValide++;
                    } else if (strcmp(statuts[i], "annule") == 0) {
                        countAnnule++;
                    } else if (strcmp(statuts[i], "reporte") == 0) {
                        countReporte++;
                    } else if (strcmp(statuts[i], "traite") == 0) {
                        countTraite++;
                    }
                }

                printf("Nombre de patients par tranche d'age:\n");
                printf("0-18 ans: %d\n", countUnder18);
                printf("19-35 ans: %d\n", count19To35);
                printf("36 ans et plus: %d\n", count36Plus);

                printf("Nombre total de reservations par statut:\n");
                printf("Valide: %d\n", countValide);
                printf("Annule: %d\n", countAnnule);
                printf("Reporte: %d\n", countReporte);
                printf("Traite: %d\n", countTraite);
                break;
            }

            case 7:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                break;
        }
    } while (choix != 7);

    return 0;
}
