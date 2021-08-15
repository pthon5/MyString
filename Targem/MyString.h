#pragma once
#include <iostream>
class MyString
{
public:
	char* str = nullptr;
	// ������������
	MyString();
	MyString(const char* str);
	MyString(const MyString &other);
	MyString(const MyString *other);
	int getSize();
	// ���������
	MyString& operator = (const MyString& other);
	MyString& operator = (const char* str);
	MyString operator + (const MyString& other);
	MyString operator + (const char* chr);
	friend std::ostream& operator << (std::ostream& os, const MyString& st);
	friend std::istream& operator >> (std::istream& in, MyString& st);

	friend std::ostream& operator << (std::ostream& os, const MyString* st);
	friend std::istream& operator >> (std::istream& in, MyString* st);
	// ����������
	~MyString();
private:
	
	int size = 0;
	// ���������� ����� ������
	int getLen(const char* chr);
};

