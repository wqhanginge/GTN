#include "headfiles.h"
//0. normal		D. digits
//1. start		L. language
//2. help		C. chances
//3. options	M. mode
//-1. illegal	I. running number
//-2. quit		EL. errorlevel
//-3. close

int main(void){
	while(true) {		//loop until endgame
		title();
		menu();
		if (EL == -3 || EL == 0) { break; }//input Esc or 0
		else if (EL == 3) {					//input 3
			options();
			if (EL == -3) { break; }		//get Esc
		}
		else if (EL == 2) {					//input 2
			helpA();
			if (EL == -3) { break; }		//get Esc
		}
		else if (EL == 1) {					//input 1
			if (show == 1) { title(); tip(); show = 0; }	//show help once
			if (EL == -3) { break; }		//get Esc
			do {
				title();
				game();
				if (EL == -3) { break; }	//get Esc
				retry();
				if (EL == -3) { break; }	//get Esc
				if (EL == 0) { break; }		//input n
			} while (EL == 1);				//input y
			if (EL == -3) { break; }
		}
	}
	system("cls");
	return 0;
}

void game(){
	producenum();
	for (I = 0; I < C; I++){
		getnumshow();
		switch (EL) {
		case -2: resultC();	//quit
		case -3: return;	//close
		}
		compare();
		compareshow();
		if (A == D) {		//win
			resultA();
			EL = 0;
			return;
		}
	}
	resultB();				//lose
	EL = 0;
}
