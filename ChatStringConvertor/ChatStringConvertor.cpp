#include <iostream>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#define getch() _getch()
using std::cout;
using std::cin;
using std::endl;

void StringToChar();
void CharToString();
void menu();
void Update();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Update();
}

void Update()
{
	menu();
	cout << "Продолжить? y/n" << endl;
	int ch;
	ch = _getch();
	while (ch == 'y')
	{
		menu();
	}
}
void menu()
{
	int ch1 = 0;
	int ch2 = 0;
	int ch;
	cout << "1.StrngToChar" << endl << "2.CharToString" << endl;
	ch = _getch();
	switch (ch)
	{
	case ('1'):
		while (ch2 != 27)
		{
			StringToChar();
			cout << "esc to stop, any key to continue" << endl;
			ch2 = _getch();
		}
		break;
	case ('2'):
		while (ch1 != 27)
		{
			CharToString();
			cout << "esc to stop, any key to continue" << endl;
			ch1 = _getch();
		}
		break;
	default:
		exit(0);
		break;
	}
}

void StringToChar()
{
	cout << "Input: ";
	unsigned char a;
	cin >> a;
	cout << endl;
	cout << int (a) << endl;
}

void CharToString()
{
	cout << "Input: ";
	int a;
	cin >> a;
	cout << endl << char(a) << endl;
}