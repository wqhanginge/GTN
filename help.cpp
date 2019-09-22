/////////////////////////////////////////////////////////////
//
//show help info
//
///////////////////////////////////////////////////////////


#include "decl.h"


void help() {
	/*overall control*/

	int help = 1;
	while (help) {
		switch(help){
		case 1:
			help = helpA();
			break;
		case 2:
			help = helpB();
			break;
		case 3:
			help = helpC();
			break;
		}
	}
}



int helpA(){
	/*about game*/

	title();
	cout << "About game:" << endl;
	cout << "============================================================" << endl;
	cout << "This is a game started in England. One write a number and" << endl;
	cout << "the other guess. In standard rule, the number will contain" << endl;
	cout << "4 digits, and every figure is different from each other. He" << endl;
	cout << "will have 10 chances to find the number out.\n" << endl;
	cout << "Every time you guess a number, you will get a tip shown as" << endl;
	cout << "\"xAyB\". \"xA\" means there are \"x\" numbers in the right place," <<endl;
	cout << "\"yB\" means there are \"y\" numbers with right figure but" << endl;
	cout << "wrong place.\n" << endl;
	cout << "Well this is truly not simple, but if you get the key, it" << endl;
	cout << "can be a pice of cace. Doesn's it interesting?" << endl;
	cout << "============================================================" << endl;
	cout << "-: page up\t+: page down\tB: back\t\tPage: 1/3" << endl;
	while(true) {
		switch (_getch()) {
		case END_G:
			exit(0);
		case '2':
		case PG_DOWN:
			return 2;
		case '3':
			return 3;
		case 'B':
		case 'b':
			return 0;
		default:
			cout << '\a';
		}
	}
}



int helpB(){
	/*operations*/

	title();
	cout << "Operation:" << endl;
	cout << "============================================================" << endl;
	cout << "0 ~ 9 ------------ input figures or select options" << endl;
	cout << "Q ---------------- give up one game while running" << endl;
	cout << "Esc -------------- unconditionally exit the program" << endl;
	cout << "============================================================" << endl;
	cout << "-: page up\t+: page down\tB: Back\t\tPage: 2/3" << endl;
	while(true){
		switch (_getch()) {
		case END_G:
			exit(0);
		case '1':
		case PG_UP:
			return 1;
		case '3':
		case PG_DOWN:
			return 3;
		case 'B':
		case 'b':
			return 0;
		default:
			cout << '\a';
		}
	}
}



int helpC(){
	/*example*/

	title();
	cout << "Example:" << endl;
	cout << "============================================================" << endl;
	cout << "=============================================" << endl;
	cout << "Please input the number you guess:1504" << endl;
	cout << "\t\t\t10.\t1504\t1A2B" << endl;
	cout << "\nSorry, you've used all chances." << endl;
	cout << "The right number is: 0549" << endl;
	cout << "=============================================\n" << endl;
	cout << "As the example above shows, \"5\" is in the right place, so" << endl;
	cout << "it shows \"1A\". \"0\" and \"4\" have right figures but" << endl;
	cout << "wrong places, so it shows \"2B\".\n" << endl;
	cout << "PS.\"10.\" means this is the 10th chance." << endl;
	cout << "============================================================" << endl;
	cout << "-: page up\t+: page down\tB: Back\t\tPage: 3/3" << endl;
	while(true){
		switch (_getch()) {
		case END_G:
			exit(0);
		case '1':
			return 1;
		case '2':
		case PG_UP:
			return 2;
		case 'B':
		case 'b':
			return 0;
		default:
			cout << '\a';
		}
	}
}
