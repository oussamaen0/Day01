#include <stdio.h>
const int y = 12, jour = 365, heures = 8765, minutes = 525949, secondes = 31556952;
int main() {
    int year;
     char menu ;
    printf("give me year : ");
    scanf("%d", &year);
    
    printf("choose what are want to convertir : \nA mois\nB jour\nC heures\nD minutes\nE secondes\n");
     scanf(" %c", &menu);
     
     switch(menu)
    {
        case 'A' : 
            printf("y * year = %d", y * year);
        break;
        case 'B' : 
            printf("jour * year = %d", jour * year);
        break;
        case 'C' : 
            printf("heures * year = %d", heures * year);
        break;
        case 'D' : 
            printf("minutes * year = %d", minutes * year);
        break;
        case 'E' : 
            printf("secondes * year = %d", secondes * year);
        break;
    }
    return 0;
}