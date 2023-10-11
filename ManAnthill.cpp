// ManAnthill.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
    std::string bild[10], comrades_name;
    int room;
    std::cout << "Program ManAntHill\n";
    for (room = 0; room < 10; ++room)
    {
        std::cout << "Input the name of the comrade living into room " << room + 1 << ":\n";
        std::getline(std::cin, comrades_name);
        bild[room] = comrades_name;
    }
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Input the number of room: ";
        std::cin >> room;
        if (room < 1 || room > 10)
            std::cout << "Wrong the number of room\n";
        else
        {
            std::cout << "\nInto room " << room << " lives comrade " << bild[room - 1] << "\n";
        }
    }
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
