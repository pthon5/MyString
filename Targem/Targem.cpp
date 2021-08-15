// Targem.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "MyString.h"
#include <vector>
#include <algorithm>

using std::vector;
using std::reverse;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int num = 0;
	std::cout << "Сколько строк считывать?";
	std::cin >> num;

	vector<MyString*>* vec_str = new vector<MyString*>;

	for (int i = 0; i < num; i++) {
		std::cout << "Введите строку:" << std::endl;
		MyString* st = new MyString;
		std::cin >> st;
		vec_str->push_back(st);
	}

	// Сортировка
	sort(vec_str->begin(), vec_str->end());
	// Переворачиваем вектор (Можно было обойтись без этого (можно было применить компаратор))
	reverse(vec_str->begin(), vec_str->end());

	std::cout << "Введённые строки:" << std::endl;

	for (MyString* ms : *vec_str) {
		std::cout << ms << std::endl;
	}

	return 0;
}
