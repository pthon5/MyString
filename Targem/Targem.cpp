// Targem.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "MyString.h"
#include <vector>
#include <set>

using std::vector;
using std::multiset;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int num = 0;
	std::cout << "Сколько строк считывать?";
	std::cin >> num;

	multiset<MyString*>* set_str = new multiset<MyString*>;

	for (int i = 0; i < num; i++) {
		std::cout << "Введите строку:" << std::endl;
		MyString* st = new MyString;
		std::cin >> st;
		set_str->insert(st);
	}

	std::cout << "Введённые строки:" << std::endl;

	for (MyString* ms : *set_str) {
		std::cout << ms << std::endl;
	}

	return 0;
}
