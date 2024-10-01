#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    char d[100];
        printf("entre your chaine caracter : ");
        gets(c);
         printf("entre your chaine caracter : ");
        gets(d);
    if (strcmp(c, d) == 0) {
        printf("Les chaînes sont égales.\n");
        }
    else {
        printf("Les chaînes sont différentes.\n");
        }
    return 0;
}