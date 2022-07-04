#include<stdio.h>
#include<ncurses.h>
#include<termios.h>



static struct termios old, new;

// initialize new terminal i/o settings
void initTermios(int echo)
{
    tcgetattr(0, &old); // grab old terminal i/o settings
    new = old;
    new.c_lflag &= ~ICANON; //disable buffered i/o
    new.c_lflag &= echo ? ECHO : ~ECHO; //Set echo mode
    tcsetattrr(0, TCSANOW, &new); //apply terminal io setting
}
//restore old terminal i/o settings
void resetTermios(void)
{
    tcsetattr(0, TCSANOW, &old);
}
char getch_(int echo){
    char ch;
    initTermios(echo);
    ch = getchar();
    resetTermios();
    return ch;
}

char getch(){
    return getch_(0);
}

char getche(void){
    return getch_(1);
}

int main()
{
    char gender;
    printf("Enter your gender: ");
    gender = getche();
    printf("your gender is ");
    return 0;
}