#include "headfiles.h"
//0. normal
//-1. illegal
//-2. quit
//-3. close
//D. digits

void producenum(){
	srand((unsigned)time(NULL));
	num[0]=rand()%10;
	do { num[1] = rand()%10; } while (num[1] == num[0]);
	do { num[2] = rand()%10; } while (num[2] == num[0] || num[2] == num[1]);
	if (D == 3) { return; }
	do { num[3] = rand()%10; } while (num[3] == num[0] || num[3] == num[1] || num[3] == num[2]);
	if (D == 4) { return; }
	do { num[4] = rand()%10; } while (num[4] == num[0] || num[4] == num[1] || num[4] == num[2] || num[4] == num[3]);
}

int getnum(){
	char ch;
	for (int i = 0; i < D + 1; i++){
		ch = _getch();
		if (ch == ENDG)						//input Esc
			return -3;
		else if (ch == 113 || ch == 81){		//input q
			cout << endl;
			return -2;
		}
		else if (i > 0 && ch == 8){			//input Backspace
			i -= 2;
			cout << "\b \b";
		}
		else if (i < D && ch > 47 && ch < 58){	//input number
			guess[i] = ch - 48;
			cout << guess[i];
		}
		else if (i == D && (ch == 13 || ch == 10))	//input Enter
			break;
		else
			i--;						//wrong input
	}
	return 0;
}

int get_show(){
	do {
		switch (L){
		case 0: cout << "Please input the number you guess:"; break;
		case 1: cout << "请输入你猜的数字:"; break;
		}
		getnum();
		if (EL == -3 || EL == -2) { return; }		//input Esc or q
		for (int i = 0; i < D - 1; i++) {			//i from 0 to D-1
			for (int j = i + 1; j < D; j++) {		//j from i+1 to D
				if (guess[i] == guess[j]) { EL = -1; }	//if there are same numbers then illegal
			}
		}
		if (EL == -1) {			//illegal
			switch (L) {
			case 0: cout << "\nThe number is illegal!" << endl; break;
			case 1: cout << "\n输入的数字不合规则!" << endl; break;
			}
		}
		else { cout << endl; }	//legal
	} while (EL == -1);
	return 0;
}