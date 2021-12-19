// area of rectangle using function 
#include<stdio.h>
int areaOfRectangle(int l, int b);
int main(){
    int a, c;

    printf("Enter the value in a for length:");
    scanf("%d", &a);
    printf("Enter the value in c for breadth of rectangle:");
    scanf("%d", &c);

    printf("The area rectangle is %d.\n", areaOfRectangle(a, c));

    return 0;
}
int areaOfRectangle(int l, int b){
    int area=l*b;
    return area;
}