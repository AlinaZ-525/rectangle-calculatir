#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double a, b, c, d; // стороны
    double h, P, S, l; // высота, периметр, площадь, средняя линия 
    bool var = false;

    while (!var) {
        cout << "Введите сторону a(основание): ";
        cin >> a;
        while (cin.fail() || a <= 0)  {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100000, '\n');
                cout << "Введите число!: ";
            } else {
                cout << "Сторона должна быть положительной: ";
            }
            cin >> a;
        }  
        
        cout << "Введите сторону d(основание): ";
        cin >> d;
        while (cin.fail() || d <= 0)  {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100000, '\n');
                cout << "Введите число!: ";
            } else {
                cout << "Сторона должна быть положительной: ";
            }
            cin >> d;
        }
    
        cout << "Введите сторону b(боковая): ";
        cin >> b;
        while (cin.fail() || b <= 0)  {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100000, '\n');
                cout << "Введите число!: ";
            } else {
                cout << "Сторона должна быть положительной: ";
            }
            cin >> b;
        }
        
      
  
        cout << "Введите сторону c(боковая): ";
        cin >> c;
        while (cin.fail() || c <= 0)  {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(100000, '\n');
                cout << "Введите число!: ";
            } else {
                cout << "Сторона должна быть положительной: ";
            }
            cin >> c;
        }
    
        

        if (a == d) {
            cout << "Ошибка! Основания не могут быть равны" << endl;
            var = false;
            continue;
        }
            
        if ((double((d > a) ? (d - a) : (a - d))) >= (b + c)) {
            cout << "Разность оснований должна быть меньше суммы боковых сторон" << endl;
            var= false;
            continue;
        }

        var = true;
    }

    P = a + b + c + d; // периметр
    l = (a + d)/2; // средняя линия
    h = sqrt(b*b - pow(((abs(a-d))*(abs(a-d)) + b*b - c*c) / (2*(abs(a-d))), 2)); // высота
    S = (a+d)/2 * h; // площадь

    int chose;
    do {
        cout << "1. P - периметр" << endl;
        cout << "2. S - площадь" << endl;
        cout << "3. l - среднюю линию" << endl;
        cout << "0. выход из программы" << endl;
        cout << "Что будем искать? " << endl;
        cin >> chose;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(100000, '\n');
            cout << "Введите число";
            cin >> chose;
        }
        switch (chose) {
            case 1:
                cout << "P = " << P << endl;
                break;
            case 2: 
                cout << "S = " << S << endl;
                break;
            case 3:
                cout << "l = " << l << endl;
                break;
            case 0:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Убедитесь в правильности выбора(число 0 - 3)" << endl;
        }
    }while (chose != 0);

    return 0;
}