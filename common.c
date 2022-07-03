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
char getch_()

char getch(void){
    return getch_(0);
}

int main()
{
    char gender;
    printf("Enter your gender: ");
    gender = getchar();
    printf("your gender is ");
    putchar(gender);
    return 0;
}