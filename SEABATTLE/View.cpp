#include "View.h"
#include <conio.h>
#include <iostream>
#include <Windows.h>



View::View()
{
}


View::~View()
{
}

using namespace std;


void drawer() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTitle(L"Ships");
	const int ROW = 10;
	const int COL = 10;

	CHAR_INFO charPole[COL * ROW];
	COORD matrM = { 5,1 };
	for (int i = 0; i < COL * ROW; ++i) {
		SetConsoleCursorPosition(hConsole, matrM);
		charPole[i].Char.UnicodeChar = 'X';
		system("color f0");
	}

	COORD matrRes = {15,1};
	for (int i = 0; i < COL * ROW; ++i) {
		SetConsoleCursorPosition(hConsole, matrRes);
		charPole[i].Char.UnicodeChar = 'X';
		system("color f0");
	}
}
