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
		cout << "\t\t在你开始之前" << endl;
		cout << "============================================================" << endl;
		cout << "在这个游戏里，你需要做的就是依靠一些提示和几次机会，猜出一个" << endl;
		cout << "各位数字都不相同的整数。\n" << endl;
		cout << "此外，提示会以\"xAyB\"的形式给出。\"xA\"表示有x个数字位置正" << endl;
		cout << "确，\"yB\"表示有y个数字是数字正确但位置不对。\n" << endl;
		cout << "想要放弃当次游戏的话，请敲Q键。" << endl;
		cout << "祝你好运!" << endl;
		cout << "============================================================" << endl;
		cout << "请按任意键继续";
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
		cout << "关于游戏:" << endl;
		cout << "============================================================" << endl;
		cout << "这是一个起源于英国的游戏。一个人写下一个数字让另一个人猜。" << endl;
		cout << "在标准规则中，这是一个每位数字都不相同的四位数。你将会有十次" << endl;
		cout << "机会来猜这个数字。\n" << endl;
		cout << "每当你给出一个数字时，你会得到一个对应的提示\"xAyB\"。其中\"xA\"" << endl;
		cout << "表示有x个数字位置正确，\"yB\"表示有y个数字是数字正确但位置" << endl;
		cout << "不对。\n" <<endl;
		cout << "说起来，这个游戏并没有这么简单，但是如果你掌握了方法的话，也" << endl;
		cout << "是可以很轻松地猜出正确结果的。这不是很有趣吗?\n" << endl;
		cout << "============================================================" << endl;
		cout << "-: 上一页\t+: 下一页\tB: 返回\t\t1/3" << endl;
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
		cout << "操作方法:" << endl;
		cout << "============================================================" << endl;
		cout << "0 ~ 9 ------------ 输入数字或选择选项" << endl;
		cout << "Q ---------------- 在游戏进程中放弃当次游戏" << endl;
		cout << "Esc -------------- 无条件退出程序" << endl;
		cout << "============================================================" << endl;
		cout << "-: 上一页\t+: 下一页\tB: 返回\t\t2/3" << endl;
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
		cout << "例子:" << endl;
		cout << "============================================================" << endl;
		cout << "=============================================" << endl;
		cout << "请输入你猜的数字:1504" << endl;
		cout << "\t\t\t10.\t1504\t1A2B" << endl;
		cout << "\n抱歉，你已经用完了所有的机会。" << endl;
		cout << "正确的数字是: 0549" << endl;
		cout << "=============================================\n" << endl;
		cout << "上例中，数字5位置正确，因此显示\"1A\"；0和4是数字正确，" << endl;
		cout << "但位置不对，所以显示\"2B\"。\n" << endl;
		cout << "另外，\"10.\"表示这是第十次机会。" << endl;
		cout << "============================================================" << endl;
		cout << "-: 上一页\t+: 下一页\tB: 返回\t\t3/3" << endl;
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
