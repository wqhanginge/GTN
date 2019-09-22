#include <iostream>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <stdlib.h>

#define ENDG 'ESC'
#define PGU '-'
#define PGD '+'

using namespace std;

extern int num[5], guess[5];
extern int A, B;
extern int L; //language
extern int EL; //errorlevel
extern int I; //running number
extern int show; //special
extern int D; //digits
extern int C; //chances


//in menu.cpp
void title();
void menu();

//in help.cpp
void tip();
void helpA();
void helpB();
void helpC();

//in main.cpp
void game();

//in getnum.cpp
void producenum();
void getnum();
void getnumshow();

//in result.cpp
void compare();
void compareshow();
void resultA();
void resultB();
void resultC();
void retry();

//in options.cpp
void options();
void optA();
void optC();
