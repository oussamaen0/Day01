#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    int longeur = 0;
        printf("entre your chaine caracter : ");
        gets(c);
    while(c[longeur] != NULL){
        longeur++;}
        printf("vous avez entre : %d\n", longeur);
    return 0;
}
