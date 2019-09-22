/////////////////////////////////////////////////////////
//
//game title and main menu
//
/////////////////////////////////////////////////////////


#include "decl.h"



void title() {
	/*show game title*/
	system("cls");
	cout << "Guess the Number 0.1.2 alpha build 5" << endl;
	cout << "======================================================================" << endl;
}



void info() {
	/*show basic operation, info*/
	cout << "Mode:Standard\tDigits:" << Di << "\tPress Q to give up" << endl;
	cout << "============================================================" << endl;
}



int menu() {
	/*show main nemu and return a choice
	/*0..............quit*/

	cout << "  1.\tstart\n  2.\thelp\n  3.\toptions\n  Q.\tquit" << endl;
	cout << "=============================================" << endl;
	cout << "Please make a choice:";
	while (true) {
		switch(_getch()){
		case END_G:
		case 'q':
		case 'Q':
			return 0;
		case '1':
			return 1;
		case '2':
			return 2;
		case '3':
			return 3;
		default:
			cout << '\a';
		}
	}
	return 0;
}
