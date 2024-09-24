#include <stdio.h>

int main() {
char c;
    printf("give me the alphabet : ");
    scanf(" %c", &c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("its a voyel.\n");
            break;
        default:
            printf("its not a voyel.\n");
    }

    return 0;
}