#include "MyString.h"

// ������� ������ ������
int MyString::getLen(const char* chr)
{
	int i = 0;
	while (true)
	{
		if (chr[i] == '\0') {
			break;
		}
		else {
			i++;
		}
			
	}

	return i;
	
}

MyString::MyString() {

}

// �����������
MyString::MyString(const MyString &other)
{
	size_t len = getLen(other.str);
	this->str = new char[len + 1];
	
	for (int i = 0; i < len; i++) {
		this->str[i] = other.str[i];
	}

	this->str[len] = '\0';
	this->size = len;

}

// �����������
MyString::MyString(const MyString* other)
{
	size_t len = getLen(other->str);
	this->str = new char[len + 1];

	for (int i = 0; i < len; i++) {
		this->str[i] = other->str[i];
	}

	this->str[len] = '\0';
	this->size = len;

}

// ���������� ������ ������
int MyString::getSize()
{
	return this->size;
}

// �����������
MyString::MyString(const char *str)
{
	size_t length = getLen(str);
	this->str = new char[length + 1];

	for (int i = 0; i < length; i++) {
		this->str[i] = str[i];
	}
	this->str[length] = '\0';
	this->size = length;
}

// �������� ������������ �� �������
MyString& MyString::operator=(const MyString &other)
{

	// ������� ������, ���� ��� ����
	if (this->str != nullptr) {
		delete[] this->str;
	}

	size_t length = getLen(other.str);
	this->str = new char[length + 1];

	for (int i = 0; i < length; i++) {
		this->str[i] = other.str[i];
	}
	this->str[length] = '\0';
	this->size = length;
	return *this;

}

// �������� ������������ �� ������
MyString& MyString::operator=(const char *str)
{

	// ������� ������, ���� ��� ����
	if (this->str != nullptr) {
		delete[] this->str;
	}

	size_t length = getLen(str);
	this->str = new char[length + 1];

	for (int i = 0; i < length; i++) {
		this->str[i] = str[i];
	}
	this->str[length] = '\0';
	this->size = length;

	return *this;

}

// �������� ������������ �� �������
MyString MyString::operator+(const MyString& other)
{
	MyString tmp_str;

	//������� ����� �����
	size_t len_this = getLen(this->str);
	size_t len_other = getLen(other.str);
	//�������� ������ ��� ����� ������
	tmp_str.str = new char[len_this + len_other + 1];

	int i = 0;
	// ��������� ������� �� this->str
	for (; i < len_this; i++) {
		tmp_str.str[i] = this->str[i];
	}

	//��������� ������ �� other.str
	for (int f = 0; f < len_other; f++, i++) {
		tmp_str.str[i] = other.str[f];
	}
	tmp_str.str[len_this + len_other] = '\0';


	return tmp_str;
}

// �������� ������������ �� ������
MyString MyString::operator+(const char* chr)
{
	MyString tmp_str;

	//������� ����� �����
	size_t len_this = getLen(this->str);
	size_t len_chr = getLen(chr);
	//�������� ������ ��� ����� ������
	tmp_str.str = new char[len_this + len_chr + 1];

	int i = 0;
	// ��������� ������� �� this->str
	for (; i < len_this; i++) {
		tmp_str.str[i] = this->str[i];
	}

	//��������� ������ �� chr
	for (int f = 0; f < len_chr; f++, i++) {
		tmp_str.str[i] = chr[f];
	}
	tmp_str.str[len_this + len_chr] = '\0';
	return tmp_str;
}


// ����������
MyString::~MyString() {
	delete[] this->str;
}

// �������� ��������������� ������
std::ostream& operator<<(std::ostream& os, const MyString& st)
{
	os << st.str;
	return os;
}

// �������� ��������������� ������
std::istream& operator>>(std::istream& in, const MyString& st)
{
	in >> st.str;
	return in;
}

std::ostream& operator<<(std::ostream& os, const MyString* st)
{
	os << st->str;
	return os;
}

std::istream& operator>>(std::istream& in, const MyString* st)
{
	in >> st->str;
	return in;
}
