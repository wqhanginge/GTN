/////////////////////////////////////////////////////////////////////////
//
//compare produced numbers and got numbers, give a result
//
/////////////////////////////////////////////////////////////////////////



#include "stdafx.h"

int A = 0;
int B = 0;


int cmp_s(){
	/*compare numbers(strict)*/

	A = B = 0;
	for (int i = 0; i < Di; i++)
		if (getn[i] == num[i])
			A++;
		else
			for (int j = 0; j < Di; j++) {
				if (j == i)
					continue;
				else if (getn[i] == num[j]) {
					B++;
					break;
				}
			}
	return A;
}



int cmp(){
	/*compare numbers*/
	return A;
}



void cmp_echo(int c){
	/*show compared result*/

	cout << "\t\t\t\t\t" << c + 1 << ".  ";
	for (int i = 0; i < Di; i++)	//show guess number
		cout << getn[i];
	cout << "\t" << A << "A" << B << "B" <<endl;		//show xAyB
}



void win(int c){
	/*win the game*/

	cout << "\nCongratulations! You've got the right number: ";
	for (int i = 0; i < Di; i++)
		cout << num[i];
	cout << endl;
	cout << "You have used " << c + 1 << " chance(s)." << endl;
}



void lose(int c){
	/*lose the game*/

	if (c < Chan)
		cout << "\nPity! You've given up the game." << endl;
	else
		cout << "\nSorry, you've used all chances." << endl;
	cout << "The right number is: ";
	for (int i = 0; i < Di; i++)
		cout << num[i];
	cout << endl;
}



int retry(){
	/*if want to start a new game
	/*1...............yes
	/*0...............no*/

	cout << "\nTry again?<y|n>";
	while (true) {
		switch(_getch()){
		case END_G:
			exit(0);
		case 'n':
		case 'N':
			return 0;
		case 'y':
		case 'Y':
			return 1;
		default:
			cout << '\a';
		}
	}
}
