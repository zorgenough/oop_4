#include "Long.h"
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Long x, y, z;

	bool flag = true;
	while (flag)
	{
		bool menu = true;
		while (menu)
		{
			char option;
			cout << "�������� �������� � �������: 1 - �������, 2 - �������, 3 - �������� ";
			cin >> option;
			cout << "������� ������ ����� (� ������� \"������� �����\" \"������� �����\" \"���������� ������ ������� �����\")" << endl;
			cin >> x;
			cout << "������� ������ ����� (� ����� �� �������)" << endl;
			cin >> y;
			switch (option)
			{
			default:
				cout << "�������� ����!" << endl;
				menu = true;
				break;
			case '1':
				z = *(x + y);
				cout << "���������: " << z << endl;
				menu = false;
				break;
			case '2':
				z = *(x - y);
				cout << "���������: " << z << endl;
				menu = false;
				break;
			case '3':
				z = *(x * y);
				cout << "���������: " << z << endl;
				menu = false;
				break;
			}
		}
			

		char choice;
		bool label = true;
		while (label)
		{
			std::cout << "������� ������ ������ ��� �����? 1 - ������, 2 - ����� ";
			std::cin >> choice;
			switch (choice)
			{
			default:
				std::cout << "�������� ����!" << std::endl;
				label = true;
				break;
			case '1':
				flag = true;
				label = false;
				break;
			case '2':
				flag = false;
				label = false;
				break;
			}
		}
	}
}