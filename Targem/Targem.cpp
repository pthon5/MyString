// Targem.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "MyString.h"
#include <vector>
#include <string>

using std::vector;
using std::string;

int main()
{
	setlocale(LC_ALL, "Russian");
	

	int num = 0;
	std::cout << "Сколько строк считывать?";
	std::cin >> num;

	//vector<MyString*>* vec_str = new vector<MyString*>;
	
	MyString* st = new MyString;
	std::cin >> st;

	/*for (int i = 0; i < num; i++) {
		std::cout << "Введите строку:" << std::endl;
		MyString* st();
		std::cin >> st;
		vec_str->push_back(st);
	}*/

	std::cout << "Введённые строки:" << std::endl;

	/*for (MyString* ms : *vec_str) {
		std::cout << ms << std::endl;
	}*/

	return 0;
}
