#include <stdio.h>

int main() {
    int numbre;
    printf("give me the number to test it if pair ou impair : ");
    scanf("%d",&numbre);
    if (numbre % 2 == 0)
    {
    printf("pair.\n");
   } else{
    printf("impair");
    return 0;
    }
    
}