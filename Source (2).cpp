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
			cout << "Выберите действие с числами: 1 - сложить, 2 - вычесть, 3 - умножить ";
			cin >> option;
			cout << "Введите первое число (в формате \"старшая часть\" \"младшая часть\" \"количество знаков младшей части\")" << endl;
			cin >> x;
			cout << "Введите второе число (в таком же формате)" << endl;
			cin >> y;
			switch (option)
			{
			default:
				cout << "Неверный ввод!" << endl;
				menu = true;
				break;
			case '1':
				z = *(x + y);
				cout << "Результат: " << z << endl;
				menu = false;
				break;
			case '2':
				z = *(x - y);
				cout << "Результат: " << z << endl;
				menu = false;
				break;
			case '3':
				z = *(x * y);
				cout << "Результат: " << z << endl;
				menu = false;
				break;
			}
		}
			

		char choice;
		bool label = true;
		while (label)
		{
			std::cout << "Желаете начать заново или выйти? 1 - заново, 2 - выйти ";
			std::cin >> choice;
			switch (choice)
			{
			default:
				std::cout << "Неверный ввод!" << std::endl;
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