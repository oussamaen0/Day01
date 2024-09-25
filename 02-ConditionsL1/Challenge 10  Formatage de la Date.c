#include <stdio.h>

int main() {
    int d,m,y;
    printf("give me your date a form d/m/y : ");
    scanf("%d/%d/%d", &d,&m,&y);
     switch(m)
    {
        case 1 : printf("%d-janvier-%d", d,y);
        break;
        case 2 : printf("%d-février-%d", d,y);
        break;
        case 3 : printf("%d-mars-%d", d,y);
        break;
        case 4 : printf("%d-avril-%d", d,y);
        break;
        case 5 : printf("%d-mai-%d", d,y);
        break;
        case 6 : printf("%d-juin-%d", d,y);
        break;
        case 7 : printf("%d-juillet-%d", d,y);
        break;
        case 8 : printf("%d-août-%d", d,y);
        break;
        case 9 : printf("%d-septembre-%d", d,y);
        break;
        case 10 : printf("%d-octobre-%d", d,y);
        break;
        case 11 : printf("%d-novembre-%d", d,y);
        break;
         case 12 : printf("%d-décembre-%d", d,y);
        break;
    }
    return 0;
}