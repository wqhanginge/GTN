////////////////////////////////////////////////////////////////
//
//produce random number and get number form keyboard
//
/////////////////////////////////////////////////////////////////



#include "decl.h"



void prod_num_s(){
	/*produce random numbers(strict)*/

	srand((unsigned)time(NULL));
	num[0] = rand() % 10;
	do { num[1] = rand() % 10; } while (num[1] == num[0]);
	do { num[2] = rand() % 10; } while (num[2] == num[0] || num[2] == num[1]);
	if (Di == 3)
		return;
	do { num[3] = rand() % 10; } while (num[3] == num[0] || num[3] == num[1] || num[3] == num[2]);
	if (Di == 4)
		return;
	do { num[4] = rand() % 10; } while (num[4] == num[0] || num[4] == num[1] || num[4] == num[2] || num[4] == num[3]);
}



void prod_num(){
	/*produce random numbers*/

	srand((unsigned)time(NULL));
	for (int i = 0; i < Di; i++)
		num[i] = rand() % 10;
}



int get_num() {
	/*get number form keyboard
	/*0.............finish
	/*-1............quit*/

	char ch;
	for (int i = 0; i < Di + 1; i++){
		ch = _getch();
		if (ch == END_G)						//input Esc
			exit(0);
		else if (ch == 'q' || ch == 'Q'){		//input q
			cout << endl;
			return -1;
		}
		else if (i > 0 && ch == 8){			//input Backspace
			i -= 2;
			cout << "\b \b";
		}
		else if (i < Di && ch >= '0' && ch <= '9'){	//input number
			get[i] = ch - '0';
			cout << get[i];
		}
		else if (i == Di && (ch == 10 || ch == 13))	//input Enter
			break;
		else
			i--;						//wrong input
	}
	return 0;
}



int get_echo(){
	/*show guid info of getting number(strict)
	/*1..............illegal
	/*0..............fine
	/*-1.............quit*/

	cout << "Please input the number you guess:";
	if (get_num() == -1)	//quit
		return -1;
	if (Mode == 1)
		return 0;
	for (int m = 0; m < Di - 1; m++)	//if have same number then illegal
		for (int n = m + 1; n < Di; n++)
			if (get[m] == get[n]){
				cout << "\nThe number is illegal!" << endl;
				return 1;
			}
	cout << endl;
	return 0;
}
