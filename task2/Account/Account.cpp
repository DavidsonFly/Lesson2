// Account.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
