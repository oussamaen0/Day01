#include <stdio.h>
void max(int x,int y){

if (x<y)
{
    printf("le petite nombre est:%d ",x);
}
else
{
    printf("le dexieme number is the petite number : %d",y);

}
}

int main(){

int x;
int y;
printf("entre premier number:");
scanf("%d",&x);
printf("entre dexieme number:");
scanf("%d",&y);

max(x,y);

return 0;
}