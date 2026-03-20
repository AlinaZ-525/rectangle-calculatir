#include <iostream>
#include <cmath>

using namespace std;
//Функция для вычисления периметра
double calculatePerimeter(double length, double width) {
	return 2 * (length + width);
	}
//Функция для вычисления площади
double calculateArea(double length, double width) {
	return length * width;
	}
//Функция для вычисления длины диагонали
double calculateDiagonal(double length, double width) {
	return sqrt(length * length + width * width);
	}
int main () {
	cout << "Программа для вычисления параметров прямоугольника" << endl;
	cout << endl;

	double length, width;

	//Ввод данных от пользователя
	cout << "Введите длину прямоугольника:";
	cin >> length;
	cout << "Введите ширину прямоугольника:";
	cin >> width;
	
	if (length <= 0 || width <= 0) {
		cout << "Ошибка: длина и ширина должны быть положительными числами." << endl;
		return 1;
		}

	cout << endl;
	cout << "Результат работы программы" << endl;
	cout << endl;

	double perimeter = calculatePerimeter(length, width);
	cout << "Периметр прямоугольника:" << perimeter << endl;
	double area = calculateArea(length, width);
	cout << "Площадь прямоугольника:" << area << endl;
	double diagonal = calculateDiagonal(length, width);
	cout << "Длина диагонали:" << diagonal << endl;

	cout << endl;
	cout << "Конец" << endl;
	//проверка 2.1
	return 0;
	}


	
