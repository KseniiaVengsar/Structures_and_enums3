// 1_Month.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


enum month
{
	Январь = 1,
	Февраль = 2,
	Март = 3,
	Апрель = 4,
	Май = 5,
	Июнь = 6,
	Июль = 7,
	Август = 8,
	Сентябрь = 9,
	Октябрь = 10,
	Ноябрь = 11,
	Декабрь = 12,
	Oшибка = 0
};
int main()
{
	setlocale(LC_ALL, "RU");

	int num=-1;
	month number = static_cast<month>(num);

	while (num != 0)
	{
		std::cout << "Введите номер месяца:";
		std::cin >> num;



		switch (num) {
		case Январь:
			std::cout << "Январь" << std::endl;
			break;
		case Февраль:
			std::cout << "Февраль" << std::endl;
			break;
		case Март:
			std::cout << "Март" << std::endl;
			break;
		case Апрель:
			std::cout << "Апрель" << std::endl;
			break;
		case Май:
			std::cout << "Май" << std::endl;
			break;
		case Июнь:
			std::cout << "Июнь" << std::endl;
			break;
		case Июль:
			std::cout << "Июль" << std::endl;
			break;
		case Август:
			std::cout << "Август" << std::endl;
			break;
		case Сентябрь:
			std::cout << "Сентябрь" << std::endl;
			break;
		case Октябрь:
			std::cout << "Октябрь" << std::endl;
			break;
		case Ноябрь:
			std::cout << "Ноябрь" << std::endl;
			break;
		case Декабрь:
			std::cout << "Декабрь" << std::endl;
			break;
		case Oшибка:
			std::cout << "До свидания!" << std::endl;
			break;

		default:
			std::cout << "Неправильный номер!" << std::endl;
			break;
		}
	}
	return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
