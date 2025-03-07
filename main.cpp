#include <iostream>
using namespace std;

// Объявление класса Car
class Car
{
    // доступ только в классе // Состояние объекта! РЕАЛИЗАЦИЯ
private:  // Приватные переменные класса, доступные только внутри класса
    double price;    // Переменная для хранения цены
    int year;        // Переменная для хранения года выпуска

    // доступ везде // Смена состояния! ИНТЕРФЕЙС
public: // Публичные методы класса, доступные извне
    Car()
    {
        cout << "========================\n";
        year = 0;
        price = 0;
        cout << "Constructor by default\n"; // Сообщение о вызове конструктора по умолчанию
    }
    // Параметризованный конструктор
    Car(int y, double pr)
    {
        cout << "========================\n";
        year = y;
        price = pr;
        cout << "Constructor by 2 params\n"; // Сообщение о вызове параметризованного конструктора
    }

    void Start()  // Метод для запуска двигателя
    {
        cout << "Engine started\n"; // Вывод сообщения о запуске двигателя
    }

    void Stop()  // Метод для остановки двигателя
    {
        cout << "Engine stopped\n"; // Вывод сообщения об остановке двигателя
    }

    // Метод для инициализации данных объекта
    void Init (int a, double b)
    {
        year = a;
        price = b;
    }

    // Метод для вывода текущих данных объекта
    void Print()
    {
        cout << year << "\t" << price << endl;
    }

    // Методы аксессоры getter setter
    // Методы для контролируемого доступа к переменным (сеттеры)
    void SetYear(int y)
    {
        if (y > 2000)
        {
            year = y;
        }
    }

    void SetPrice(int pr)
    {
       if (pr > 15000)
       {
           price = pr;
       }
    }

    // Контролированный доступ
    // Методы для получения значений переменных (геттеры)
    int GetYear()
    {
        return year;
    }

    double GetPrice()
    {
        return price;
    }

};

int main() {
    cout << endl << endl;

    // Здесь мы можем обращаться к нашим объектам класса (public)
    // Конструктор по умолчанию (т.к без параметров)
    // Создание объекта с помощью конструктора по умолчанию
    Car a; // Создание объекта a класса Car
    a.Print(); // Вывод информации об объекте
    cout << "========================\n";

    // Создание объекта с помощью параметризованного конструктора
    Car b(2012, 12400); // вызов конструктора с параметрами
    b.Print();
    cout << "========================\n";

    // Изменение данных объекта a
    cout << "Init [or changing data method]:\n";
    a.Init(2012, 20000);
    a.Print(); // Вывод измененной информации

    cout << endl;

    a.Start(); // Вызов метода Start для объекта a
    a.Stop(); // Вызов метода Stop для объекта a

    cout << endl;

    // Установка и получение цены с контролем
    a.SetPrice(20000);
    cout << "The car costs " << a.GetPrice() << endl;

    // Установка и получение года выпуска с контролем
    a.SetYear(2015);
    cout << "Release year is " << a.GetYear() << endl;

    return 0;
}
