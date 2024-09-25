#include <stdio.h>
const int y = 12, jour = 365, heures = 8765, minutes = 525949, secondes = 31556952;
int main() {
    int year;
    int x;
    printf("give me year : ");
    scanf("%d", &year);
    printf("choose what are want to convertir : \n1 mois\n2 jour\n3 heures\n4 minutes\n5 secondes\n");
     scanf("%d", &x);
     switch(x)
    {
        case 1 : 
            printf("y * year = %d", y * year);
        break;
        case 2 : 
            printf("jour * year = %d", jour * year);
        break;
        case 3 : 
            printf("heures * year = %d", heures * year);
        break;
        case 4 : 
            printf("minutes * year = %d", minutes * year);
        break;
         case 5 : 
            printf("secondes * year = %d", secondes * year);
        break;
    }
    return 0;
}