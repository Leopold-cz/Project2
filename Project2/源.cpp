#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include<string.h>
#include <iostream>
#include<conio.h>
#define random(x) (rand()%x)

using namespace std;
void display(int x);

int main() {

	srand((int)time(0));
	int Num = 0;
	cout << endl << endl << "              按键开始" << endl << "        Press any key to Start";
	_getch();
	system("cls");

	char c;
	while (1) {
		Num = random(400);
		display(Num);
		Sleep(50);
		if (GetAsyncKeyState('P')) {
			system("pause");
		}
		system("cls");
	}
	return 0;
}

void display(int x) {
	cout << endl << endl << "              按p键暂停" << endl << "        Press ‘p’ key to Suspend";
	cout << endl << endl;
	cout << "           luck Number:" << x << endl << endl << endl;
}
