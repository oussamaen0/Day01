#include <stdio.h>
int factorielle(int number){

    int f = 1;
        for(int i = 1 ; i <= number ; i++){
            f = f * i;}
      return f;
}
int main(){
    int number;
    int f;
        printf("entrer numbre number:");
        scanf("%d",&number);
    f = factorielle(number);
        printf("%d!=%d",number,f);
return 0;
}