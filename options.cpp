#include "headfiles.h"
//0. no problem
//-3. close
//D. digits

void options(){
	int sp = 0;		//special loop
	while (1 == 1) {
		title();
		optA();
		optC();
		do {
			switch (_getch()) {
			case ENDG: EL = -3; return;	//input Esc
			case 'b':
			case 'B': EL = 0; return;	//input B or b
			case 51: D = 3; break;		//input 3
			case 52: D = 4; break;		//input 4
			case 53: D = 5; break;		//input 5
			case 69:
			case 101: L = 0; break;		//input E or e
			case 67:
			case 99: L = 1; break;		//input C or c
			default: sp = 1;			//other inputs
			}
		} while (sp-- == 1);	//loop when other inputs
	}
}

void optA(){
	if (L == 0) {
		switch (D) {
		case 3:
			cout << "Digits:" << endl;
			cout << "  3.three digits @\t4.four digits\n  5.five digits" << endl;
			cout << "=============================================" << endl;
			break;
		case 4:
			cout << "Digits:" << endl;
			cout << "  3.three digits\t4.four digits @\n  5.five digits" << endl;
			cout << "=============================================" << endl;
			break;
		case 5:
			cout << "Digits:" << endl;
			cout << "  3.three digits\t4.four digits\n  5.five digits @" << endl;
			cout << "=============================================" << endl;
			break;
		}
	}
	else {
		switch (D) {
		case 3:
			cout << "λ��:" << endl;
			cout << "  3.��λ @\t4.��λ  \t5.��λ" << endl;
			cout << "=============================================" << endl;
			break;
		case 4:
			cout << "λ��:" << endl;
			cout << "  3.��λ \t4.��λ @\t5.��λ" << endl;
			cout << "=============================================" << endl;
			break;
		case 5:
			cout << "λ��:" << endl;
			cout << "  3.��λ \t4.��λ  \t5.��λ @" << endl;
			cout << "=============================================" << endl;
			break;
		}
	}
}

void optC() {
	switch (L) {
	case 0:
		cout << "Language:" << endl;
		cout << "  E.English @\tC.Chinese" << endl;
		cout << "\n  B.Back" << endl;
		cout << "=============================================" << endl;
		cout << "Please make a choice:";
		break;
	case 1:
		cout << "����:" << endl;
		cout << "  E.Ӣ��\tC.���� @" << endl;
		cout << "\n  B.����" << endl;
		cout << "=============================================" << endl;
		cout << "��ѡ��:";
		break;
	}
}