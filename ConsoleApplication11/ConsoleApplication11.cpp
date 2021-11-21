#include <windows.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <wingdi.h>



using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int color, a, b, c;
	cout << "Введи колличесво прокруток вниз "; cin >> a;
	cout << "Введи колличесво прокруток вверх "; cin >> b;

	const int wait = 50;

	cout << "Нажать f для начала" << endl;//0x46

	while (1)
	{
		if (GetAsyncKeyState(0x01))
		{
			cout << "Left click pressed" << endl;
		}
		else  if (GetAsyncKeyState(0x46))
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < a; j++)
				{
					////////////////////////////////////////////////////////
					Sleep(wait);
					SetCursorPos(1067, 712);
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//левый клик мыши
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
					Sleep(wait);
					SetCursorPos(491, 976);
					Sleep(wait);
					mouse_event(MOUSEEVENTF_WHEEL, 0, 0, -150, 0);
					////////////////////////////////////////////////////////
					Sleep(wait);
					SetCursorPos(491, 976);//установка координат курсора
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//левый клик мыши
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
					Sleep(wait);

					////////////////////////////////////////////////////////

					SetCursorPos(567, 862);//установка координат курсора
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//левый клик мыши
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
					Sleep(wait);

					if (GetAsyncKeyState(0x46))
					{
						system("pause");
					}
					////////////////////////////////////////////////////////
					
				}
				for (int o = 0; o < b; o++)

				{
					////////////////////////////////////////////////////////
					Sleep(wait);
					SetCursorPos(1067, 712);
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//левый клик мыши
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
					Sleep(wait);
					////////////////////////////////////////////////////////
					SetCursorPos(491, 976);
					Sleep(wait);
					mouse_event(MOUSEEVENTF_WHEEL, 0, 0, 150, 0);
					
					/////////////////////////////////////////////////////////////
				
					Sleep(wait);
					SetCursorPos(491, 976);//установка координат курсора
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//левый клик мыши
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
					Sleep(wait);

					////////////////////////////////////////////////////////
					Sleep(wait);
					SetCursorPos(567, 862);//установка координат курсора
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);//левый клик мыши
					Sleep(wait);
					mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
					Sleep(wait);

					////////////////////////////////////////////////////////

					if (GetAsyncKeyState(0x46))
					{
						system("pause");
					}
				}
				

				
			}
		}

	}


}


/*
#define MOUSEEVENTF_MOVE 0x0001
#define MOUSEEVENTF_LEFTDOWN 0x0002
#define MOUSEEVENTF_LEFTUP 0x0004
#define MOUSEEVENTF_RIGHTDOWN 0x0008
#define MOUSEEVENTF_RIGHTUP 0x0010
#define MOUSEEVENTF_MIDDLEDOWN 0x0020
#define MOUSEEVENTF_MIDDLEUP 0x0040
#define MOUSEEVENTF_XDOWN 0x0080
#define MOUSEEVENTF_XUP 0x0100
#define MOUSEEVENTF_WHEEL 0x0800
#define MOUSEEVENTF_VIRTUALDESK 0x4000
#define MOUSEEVENTF_ABSOLUTE 0x8000
*/
