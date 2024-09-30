#include <stdio.h>
int calcule(int x, int y) {
  int sum = x + y;
 
  return sum;
}
int main() {
    int x,y;
    int sum;
    printf("entre premier number : ");
    scanf("%d",&x);
    printf("entre deuxieme number : ");
    scanf("%d",&y);
    sum = calcule(x,y);
    printf("The sum of %d + %d is: %d", x, y, sum);
    return 0;
    }