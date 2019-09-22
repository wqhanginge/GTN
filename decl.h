///////////////////////////////////////////////////////////////////////////////////
//
//all headfiles and declarations of functions and global variables
//
////////////////////////////////////////////////////////////////////////////////////


#pragma once
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <conio.h>

using namespace std;


#define END_G 27
#define PG_UP '-'
#define PG_DOWN '+'


//global.cpp
extern int num[5], get[5];
extern int Lan;	//language
extern int Di;	//digits
extern int Chan;	//chances
extern int Mode;	//modes


//menu.cpp
void title();
void info();
int menu();


//help.cpp
void help();
int helpA();
int helpB();
int helpC();


//getnum.cpp
void prod_num_s();
void prod_num();
int get_num();
int get_echo();


//option.cpp
int option();
void optA();
void optB();
void optC();
void optD();
void language();


//result.cpp
int cmp_s();
int cmp();
void cmp_echo(int c);
void win(int c);
void lose(int c);
int retry();


//main.cpp
int game_s();
int game();
