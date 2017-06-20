#include "Options.h"
#include <conio.h>
#include <iostream>
#include <ctime>
#include <thread>

using namespace std;

Options::Options()
{
}


Options::~Options()
{
}

void timer(int ms) {
	int CLOCKS_PER_MSEC = CLOCKS_PER_SEC / 1000;   // новая константа 
	clock_t end_time = clock() + ms * CLOCKS_PER_MSEC;  // время завершения 
	while (clock() < end_time) {}  // цикл ожидания времени 
	cout << "Время вышло!!!\n";  // сообщение о конце работы функции
}

void keyAdapter() {
	enum VKey { MVK_UP = 72, MVK_LEFT = 75, MVK_RIGHT = 77, MVK_DOWN = 80, MVK_F12 = 134, MVK_ESC = 27, MVK_ENTER = 13 };
	int ch = 0;
	const int t = 10000;

	for (; ; ) {
		ch = _getch();
		if (!_kbhit()) {
			// ENTER
			if (ch == 13) {
				cout << "MVK_ENTER\n";
			}
			// ESC
			if (ch == 27)
				system("pause");
		}

		else if (_kbhit() && (ch == 0x00 || ch == 0xE0)) {
			ch = _getch();
			switch (ch)
			{
			case MVK_LEFT:
				// dosmth
				break;
			case MVK_UP:
				// dosmth
				break;

			case MVK_RIGHT:
				// dosmth
				break;
			case MVK_DOWN:
				// dosmth
				break;

			case MVK_F12:				//pause
				if(!(MVK_DOWN | MVK_ENTER | MVK_UP | MVK_LEFT | MVK_RIGHT)){
					for (int i = 0; i < t; i++)
						timer(i);
				}

				break;

			default:
				// dosmth
				break;
			}
		}
	}
}
