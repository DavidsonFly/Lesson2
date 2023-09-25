// structure.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
