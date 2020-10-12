#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<windows.h>
using namespace std;

#define ESC 27
#define W 119
#define A 97
#define S 115
#define D 100
#define Q 113
#define E 101
#define UN 0

void gotoxy(int x, int y){
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
