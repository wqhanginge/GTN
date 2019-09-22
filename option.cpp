//////////////////////////////////////////////////////////////
//
//options about the game
//
//////////////////////////////////////////////////////////////



#include "stdafx.h"



int option(){
	/*show option menu
	/*0...........end option
	/*1...........continue option*/

	title();
	optA();
	optB();
	optC();
	optD();
	while(true){
		switch(_getch()){
		case END_G:
			exit(0);
		case 'b':
		case 'B':
			return 0;
		case '1':
			Mode = 0;
			return 1;
		case '2':
			//Mode = 1;
			return 1;
		case '3':
			Di = 3;
			return 1;
		case '4':
			Di = 4;
			return 1;
		case '5':
			Di = 5;
			return 1;
		case 'L':
		case 'l':
			language();
			return 1;
		default:
			cout << '\a';
		}
	}
}



void optA(){
	/*mode*/

	cout << "Mode:" << endl;
	if (!Mode)		//mode==0
		cout << "  1.Standard @\t2.Advanced" << endl;
	else		//mode==1
		cout << "  1.Standard\t2.Advanced @" << endl;
	cout << "=============================================" << endl;
}



void optB(){
	/*digits*/
	
	cout << "Digits:" << endl;
	switch (Di) {
	case 3:
		cout << "  3.three digits @\t4.four digits\n  5.five digits" << endl;
		break;
	case 4:
		cout << "  3.three digits\t4.four digits @\n  5.five digits" << endl;
		break;
	case 5:
		cout << "  3.three digits\t4.four digits\n  5.five digits @" << endl;
		break;
	}
	cout << "=============================================" << endl;
}



void optC(){
	/*difficulty*/
}



void optD(){
	/*language entrence*/
	cout << "  L.Language\tB.Back" << endl;
	cout << "=============================================" << endl;
	cout << "Please make a choice:";
}



void language(){
	/*language*/
}
