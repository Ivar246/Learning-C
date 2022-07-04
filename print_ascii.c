#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<255; i++){
        if(i%24==0){
            printf("Enter any key for next.......");
            getch();
        }
    }
    getch();
    return 0;
}