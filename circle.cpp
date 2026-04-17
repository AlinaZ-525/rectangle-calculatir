#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russuain");
    cout << "Окружность " << endl;
    double r; // Радиус окружности
    //Защита для радиуса
    do {
        cout << "радиус r = ? ";
        cin >> r;        
        // Проверка: если ввели буквы или число <= 0
        if (cin.fail() || r <= 0) {
            cout << "Ошибка\n";
            cin.clear();              // Сбросить флаг ошибки
            cin.ignore(10000, '\n');  // Удалить плохой ввод из буфера
            r = -1;                        // Принудительно повторить цикл
        }
    } while (r <= 0);
    
    //  ввод угла сектора с защитой
    double angle; // Угол сектора в градусах
    do {
        cout << "Угол кругового сектора(0-360) = ? ";
        cin >> angle; 
         // Проверка: буквы, отрицательные числа, угол > 360
        if (cin.fail() || angle <= 0 || angle > 360) {
            cout << "Ошибка:\n";
            cin.clear();
            cin.ignore(10000, '\n');
            angle = -1;
        }
    } while (angle <= 0 || angle > 360);
    
    const double PI = 3.14159265359;
    double circumference = 2 * PI * r;                    // Длина окружности: C = 2πr
    double area_circle = PI * r * r;                      // Площадь круга: S = πr²
    double area_sector = (angle / 360.0) * area_circle;   // Площадь сектора: S = (α/360)·πr²
    
    // вывод результатов:
    cout << "Длина окружности = " << circumference << endl;
    cout << "Площадь круга = " << area_circle << endl;
    cout << "Площадь кругового сектора = " << area_sector << endl;
    return 0;}
