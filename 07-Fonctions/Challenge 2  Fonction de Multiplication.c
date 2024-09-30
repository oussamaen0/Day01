#include <stdio.h>
int calcule(int x, int y) {
  int multp = x * y;
 
  return multp;
}
int main() {
    int x,y;
    int multp;
    printf("entre premier number : ");
    scanf("%d",&x);
    printf("entre deuxieme number : ");
    scanf("%d",&y);
    multp = calcule(x,y);
    printf("The sum of %d * %d is: %d", x, y, multp);
    return 0;
    }