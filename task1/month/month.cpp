// month.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum Month
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};
int main()
{
	int input;

	do {
		std::cout << "Enter your number(1-12)" << std::endl;
		std::cin >> input;

		if (input < 0 || input > 12)
		{
			std::cout << "Incorrect input. Try again..." << std::endl;
			continue;
		}
		if (input == 0)
		{
			break;
		}

		Month month = static_cast<Month>(input);

		switch (month)
		{
		case January:
			std::cout << "January" << std::endl;
			break;

		case February:
			std::cout << "February" << std::endl;
			break;

		case March:
			std::cout << "March" << std::endl;
			break;

		case April:
			std::cout << "April" << std::endl;
			break;

		case May:
			std::cout << "May" << std::endl;
			break;

		case June:
			std::cout << "June" << std::endl;
			break;

		case July:
			std::cout << "July" << std::endl;
			break;

		case August:
			std::cout << "August" << std::endl;
			break;

		case September:
			std::cout << "September" << std::endl;
			break;

		case October:
			std::cout << "October" << std::endl;
			break;

		case November:
			std::cout << "November" << std::endl;
			break;

		case December:
			std::cout << "December" << std::endl;
			break;
		}

	} while (input != 0);
	

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
