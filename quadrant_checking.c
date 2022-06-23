#include<stdio.h>
int main()
{
    int x, y, q;
    printf("Enter the coordinate(x,y): ");
    scanf("%d%d", &x, &y);

    if(x>0 && y>0){
        q=1;
    }
    else if(x<0 && y>0){
        q=2;
    }
    else if(x<0 && y<0){
    q=3;
    }
    else{
        q=4;
    }
    printf("(%d, %d) lies in %d quadrant.", x, y, q);
}