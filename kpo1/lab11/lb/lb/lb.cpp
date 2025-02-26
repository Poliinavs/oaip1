﻿// lb.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int target1 = 3;
	int num_items1 = count(v.begin(), v.end(), target1); 
	cout << "число: " << target1 << " количество: " << num_items1 << endl;
	int num_items3 = count_if(v.begin(), v.end(), [](int i) { return i % 3 == 0; });
	cout << "количество элементов, кратных 3: " << num_items3 << endl;
	cout << endl << "Лямбда, захват переменных" << endl;
	for (auto i : v) [i]() {if (i % 3 == 0) cout << i << " "; }();
	cout << "\nЛямбда с параметрами" << endl;
	for (auto i : v) [](auto i) {if (i % 3 == 0) cout << i << " "; }(i);
	cout << endl << "Лямбда без параметров" << endl;
	for (auto i : v) [i] {if (i % 3 == 0) cout << i << " "; }();
}

