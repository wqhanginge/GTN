#include "headfiles.h"

void tip() {
	title();
	switch (L) {
	case 0:
		cout << "\t\tBefore you start" << endl;
		cout << "============================================================" << endl;
		cout << "All you need to do in this game is to find out a number with" << endl;
		cout << "different figuers by several tips and chances.\n" << endl;
		cout << "By the way, the tip looks like \"xAyB\". \"xA\" means there are" << endl;
		cout << "\"x\" numbers in the right place, \"yB\" means there are \"y\"" << endl;
		cout << "numbers with right figure but wrong place.\n" << endl;
		cout << "Anyway, if you want to give up the game, just hit \"Q\"." << endl;
		cout << "Well, good luck!" << endl;
		cout << "============================================================" << endl;
		cout << "Press any key to continue";
		break;
	case 1:
		cout << "\t\t���㿪ʼ֮ǰ" << endl;
		cout << "============================================================" << endl;
		cout << "�������Ϸ�����Ҫ���ľ�������һЩ��ʾ�ͼ��λ��ᣬ�³�һ��" << endl;
		cout << "��λ���ֶ�����ͬ��������\n" << endl;
		cout << "���⣬��ʾ����\"xAyB\"����ʽ������\"xA\"��ʾ��x������λ����" << endl;
		cout << "ȷ��\"yB\"��ʾ��y��������������ȷ��λ�ò��ԡ�\n" << endl;
		cout << "��Ҫ����������Ϸ�Ļ�������Q����" << endl;
		cout << "ף�����!" << endl;
		cout << "============================================================" << endl;
		cout << "�밴���������";
		break;
	}
	if (_getch() == ENDG) { EL = -3; return; }
	EL = 0;
}

void helpA(){
	title();
	switch (L) {
	case 0:
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
		cout << "-: page up\t+: page down\tB: back\t\t1/3" << endl;
		break;
	case 1:
		cout << "������Ϸ:" << endl;
		cout << "============================================================" << endl;
		cout << "����һ����Դ��Ӣ������Ϸ��һ����д��һ����������һ���˲¡�" << endl;
		cout << "�ڱ�׼�����У�����һ��ÿλ���ֶ�����ͬ����λ�����㽫����ʮ��" << endl;
		cout << "��������������֡�\n" << endl;
		cout << "ÿ�������һ������ʱ�����õ�һ����Ӧ����ʾ\"xAyB\"������\"xA\"" << endl;
		cout << "��ʾ��x������λ����ȷ��\"yB\"��ʾ��y��������������ȷ��λ��" << endl;
		cout << "���ԡ�\n" <<endl;
		cout << "˵�����������Ϸ��û����ô�򵥣���������������˷����Ļ���Ҳ" << endl;
		cout << "�ǿ��Ժ����ɵز³���ȷ����ġ��ⲻ�Ǻ���Ȥ��?\n" << endl;
		cout << "============================================================" << endl;
		cout << "-: ��һҳ\t+: ��һҳ\tB: ����\t\t1/3" << endl;
		break;
	}
	while(1){
		switch (_getch()) {
		case ENDG: EL = -3; return;
		case PGD: helpB(); return;
		case 'B':
		case 'b': EL = 0; return;
		}
	}
}

void helpB(){
	title();
	switch(L){
	case 0:
		cout << "Operation:" << endl;
		cout << "============================================================" << endl;
		cout << "0 ~ 9 ------------ input figures or select options" << endl;
		cout << "Q ---------------- give up one game while running" << endl;
		cout << "Esc -------------- unconditionally exit the program" << endl;
		cout << "============================================================" << endl;
		cout << "-: page up\t+: page down\tB: Back\t\t2/3" << endl;
		break;
	case 1:
		cout << "��������:" << endl;
		cout << "============================================================" << endl;
		cout << "0 ~ 9 ------------ �������ֻ�ѡ��ѡ��" << endl;
		cout << "Q ---------------- ����Ϸ�����з���������Ϸ" << endl;
		cout << "Esc -------------- �������˳�����" << endl;
		cout << "============================================================" << endl;
		cout << "-: ��һҳ\t+: ��һҳ\tB: ����\t\t2/3" << endl;
		break;
	}
	while(1){
		switch (_getch()) {
		case ENDG: EL = -3; return;
		case PGU: helpA(); return;
		case PGD: helpC(); return;
		case 'B':
		case 'b': EL = 0; return;
		}
	}
}

void helpC(){
	title();
	switch (L){
	case 0:
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
		cout << "-: page up\t+: page down\tB: Back\t\t3/3" << endl;
		break;
	case 1:
		cout << "����:" << endl;
		cout << "============================================================" << endl;
		cout << "=============================================" << endl;
		cout << "��������µ�����:1504" << endl;
		cout << "\t\t\t10.\t1504\t1A2B" << endl;
		cout << "\n��Ǹ�����Ѿ����������еĻ��ᡣ" << endl;
		cout << "��ȷ��������: 0549" << endl;
		cout << "=============================================\n" << endl;
		cout << "�����У�����5λ����ȷ�������ʾ\"1A\"��0��4��������ȷ��" << endl;
		cout << "��λ�ò��ԣ�������ʾ\"2B\"��\n" << endl;
		cout << "���⣬\"10.\"��ʾ���ǵ�ʮ�λ��ᡣ" << endl;
		cout << "============================================================" << endl;
		cout << "-: ��һҳ\t+: ��һҳ\tB: ����\t\t3/3" << endl;
		break;
	}
	while(1){
		switch (_getch()) {
		case ENDG: EL = -3; return;
		case PGU: helpB(); return;
		case 'B':
		case 'b': EL = 0; return;
		}
	}
}
