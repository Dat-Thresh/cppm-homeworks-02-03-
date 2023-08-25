// cppm-homeworks_02_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
struct cities {
    std::string city;
    std::string street;
    int homeNumb;
    int apartment;
    int index;
};

const int N = 3; //кол-во городов

void fill_cities(cities* arr_cities);//заполняет города в массив
void print_cities(cities* arr_cities, const int N); //печатает города в консоль

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cities* arr_cities = new(std::nothrow) cities[N];
    if (arr_cities == NULL) {
        std::cout << "Недостаточно памяти" << std::endl;
        return 1;
    }
    fill_cities(arr_cities);
    print_cities(arr_cities, N);
    delete[] arr_cities;
    return 0;

    


}

void fill_cities(cities* arr_cities) {
    arr_cities[0].city = "Ижевск";
    arr_cities[0].street = "Шушкина";
    arr_cities[0].homeNumb = 13;
    arr_cities[0].apartment = 5;
    arr_cities[0].index = 133565;

    arr_cities[1].city = "Москва";
    arr_cities[1].street = "Арбат";
    arr_cities[1].homeNumb = 12;
    arr_cities[1].apartment = 8;
    arr_cities[1].index = 111645;

    arr_cities[2].city = "Кола";
    arr_cities[2].street = "Туломская";
    arr_cities[2].homeNumb = 26;
    arr_cities[2].apartment = 33;
    arr_cities[2].index = 144562;
}

void print_cities(cities* arr_cities, const int N) {
    for (int i = 0; i < N; i++) {
        std::cout << "Город: " << arr_cities[i].city << std::endl;
        std::cout << "Улица: " << arr_cities[i].street << std::endl;
        std::cout << "Номер дома: " << arr_cities[i].homeNumb << std::endl;
        std::cout << "Номер квартиры: " << arr_cities[i].apartment << std::endl;
        std::cout << "Индекс: " << arr_cities[i].index << std::endl << std::endl;
        
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
