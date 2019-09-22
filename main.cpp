////////////////////////////////////////////////////////////////////
//
//entrance of game
//
///////////////////////////////////////////////////////////////////


#include "decl.h"



int main(void) {
	/*link to main options*/

	int el;	//errorlevel
	title();
	while(el = menu()) {
		if (el == 1) {
			do {
				game_s();
			} while(retry());
		}
		else if (el == 2)
			help();
		else if (el == 3)
			while(option());
		title();
	}
	system("cls");
	return 0;
}



int game_s() {
	/*one game(strict)*/

	int el;	//errorlevel
	title();
	info();
	prod_num_s();	//make random numbers
	for (int c = 0; c < Chan; c++) {
		while((el = get_echo()) == 1);	//illegal input
		if (el == -1) {		//quit
			lose(c);
			return 0;
		}
		el = cmp_s();	//compare
		cmp_echo(c);	//give result
		if (el == Di) {	//win
			win(c);
			return 0;
		}
	}
	lose(c);	//use up chances
	return 0;
}



int game(){
	/*one game*/
	return 0;
}
