#include "headfiles.h"
//1. restart game
//0. quit
//-3. close
//D. digits

void compare() {
	int i, j;
	A = 0;
	B = 0;
	for (i = 0; i < D; i++) {
		if (guess[i] == num[i]) { A++; }
		else {
			for (j = 0; j < D; j++) {
				if (j == i) { continue; }
				else if (guess[i] == num[j]) { B++; break; }
			}
		}
	}
}

void compareshow(){
	cout << "\t\t\t\t\t" << I + 1 << ".  ";
	for (int i = 0; i < D; i++) { cout << guess[i]; }	//show guess number
	cout << "\t" << A << "A" << B << "B" <<endl;		//show xAyB
}

void resultA(){
	switch (L) {
	case 0: cout << "\nCongratulations! You've got the right number: "; break;
	case 1: cout << "\n��ϲ��!���ҵ�����ȷ������: "; break;
	}
	for (int i = 0; i < D; i++) { cout << num[i]; }
	cout << endl;
	switch (L) {
	case 0: cout << "You have used " << I + 1 << " chance(s)." << endl; break;
	case 1: cout << "���õ���" << I + 1 << "�λ��ᡣ" << endl; break;
	}
}

void resultB(){
	switch (L) {
	case 0:
		cout << "\nSorry, you've used all chances." << endl;
		cout << "The right number is: ";
		break;
	case 1:
		cout << "\n��Ǹ�����Ѿ����������еĻ��ᡣ" << endl;
		cout << "��ȷ��������: ";
		break;
	}
	for (int i = 0; i < D; i++) { cout << num[i]; }
	cout << endl;
}

void resultC(){
	switch (L) {
	case 0:
		cout << "\nPity! You've given up the game." << endl;
		cout << "The right number is: ";
		break;
	case 1:
		cout << "\n���ź�!������������Ϸ��" << endl;
		cout << "��ȷ��������: ";
		break;
	}
	for (int i = 0; i < D; i++) { cout << num[i]; }
	cout << endl;
}

void retry(){
	switch (L) {
	case 0: cout << "\nTry again?<y/n>"; break;
	case 1: cout << "\n����һ��?<y/n>"; break;
	}
	while(1 == 1) {
		switch (_getch()) {
		case ENDG: EL = -3; return;	//input Esc
		case 78:
		case 110: EL = 0; return;	//input n
		case 89:
		case 121: EL = 1; return;	//input y
		}
	}
}