#include "headfiles.h"
//1. start game
//2. help
//0. quit
//-3. close

void title(){
	system("cls");
	switch (L){
	case 0:
		cout << "Guess the Number 0.1.0 alpha" << endl;
		cout << "======================================================================" << endl;
		break;
	case 1:
		cout << "猜数字 v0.1.0 alpha" << endl;
		cout << "======================================================================" << endl;
		break;
	}
}		//show title

void menu(){
	switch (L) {
	case 0:		//english
		cout << "  1.\tstart\n  2.\thelp\n  3.\toptions\n  Q.\tquit" << endl;
		cout << "=============================================" << endl;
		cout << "Please make a choice:";
		break;
	case 1:		//chinese
		cout << "  1.\t开始\n  2.\t帮助\n  3.\t设置\n  Q.\t退出" << endl;
		cout << "=============================================" << endl;
		cout << "请选择:";
		break;
	}	//show menu
	do {
		switch (_getch()) {
		case ENDG: EL = -3; return;	//input Esc
		case 'q':
		case 'Q': EL = 0; return;	//input Q or q
		case 49: EL = 1; return;	//input 1
		case 50: EL = 2; return;	//input 2
		case 51: EL = 3; return;	//input 3
		}
	} while(true);	//get choice
}
