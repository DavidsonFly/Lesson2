 ## Данный файл содержит коды программ всех трех заданий.

 # task1/ month
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
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------

# task2/Account
#include <iostream>
#include<string>

struct Account
{
    unsigned int countNumber = 0;
    std::string name;
    unsigned int balance = 0;
};

void requestNewBalance(Account& account)
{
   
    std::cout << "Enter your new balance:" << std::endl;
    std::cin >> account.balance;
      
}
int main()
{
    Account count;
    std::cout << "Enter your count number:" << std::endl;
    std::cin >> count.countNumber;
    std::cout << "Enter your Name:" << std::endl;
    std::cin >> count.name;
    std::cout << "Enter your balance:" << std::endl;
    std::cin >> count.balance;

    requestNewBalance(count);
    
    std::cout << "Your information:" << count.name << ", " << count.countNumber << ", " << count.balance << std::endl;
    
    return 0;
}
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------

# task3/structure
#include <iostream>
#include<string>

struct Moscow
{
    std::string city;
    std::string street;
    int homeNum;
    int flatNum;
    int postCale;
};

void printAdress(Moscow& adress)
{
    Moscow* adress_array = new Moscow[1];
    adress_array[0].city = "Moscow";
    adress_array[0].street = "Arbat";
    adress_array[0].homeNum = 12;
    adress_array[0].flatNum = 8;
    adress_array[0].postCale = 12345;

    for (int i = 0; i < 1; i++)
    {
        std::cout << "City:" << " " << adress_array[i].city << std::endl;
        std::cout << "Street:" << " " << adress_array[i].street << std::endl;
        std::cout << "Home number:" << " " << adress_array[i].homeNum << std::endl;
        std::cout << "Flat number:" << " " << adress_array[i].flatNum << std::endl;
        std::cout << "Postcale:" << " " << adress_array[i].postCale << std::endl;

    }

    delete[] adress_array;
}
int main()
{
    Moscow print;

        printAdress(print);

        return 0;
}
