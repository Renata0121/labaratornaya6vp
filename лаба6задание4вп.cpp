﻿// лаба6задание4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c; //объявление переменных
	int k = 0;
	int s = 0;
	cout << "Введите a, b, c";
	cin >> a >> b >> c; //присваивание переменным значений
	k = (a / c) * (b / c); //поиск количества квадратов
	s = k * c * c; //нахождение площади всех квадратов
	s = a * b - s; //нахождение незанятой части прямоугольника
	cout<< "k="<< k<< endl; //вывод полученного значения на экран
	cout<< "s="<< s;
	return 0;
}
