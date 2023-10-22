#include "String.h"

String::String() 
	: str{ new char }, length{ 0 }
{
	str[0] = '\0';
}

String::String(int length)
	: str{ new char[length + 1] }, length{ length }
{
	for (int i = 0; i < length; i++)
		str[i] = ' ';
	str[length] = '\0';
}

String::String(const char* cstr)
{
	length = (int)strlen(cstr);
	str = new char[length + 1];
	for (int i = 0; i < length; i++)
		str[i] = cstr[i];
	str[length] = '\0';
}

String::String(char symbol)
	: str{ new char[2]}, length{1}
{
	str[0] = symbol;
	str[1] = '\n';
}

String::String(char symbol, int count)
	: str{ new char[count + 1] }, length{ count }
{
	for (int i = 0; i < length; i++)
		str[i] = symbol;
	str[length] = '\0';
}

void String::Print()
{
	std::cout << str;
}

String::~String()
{
	if (str)
		delete[] str;
}

String operator+(const String& str1, const String& str2)
{
	char* cstr = new char[str1.length + str2.length + 1];

	for (int i = 0; i < str1.length; i++)
		cstr[i] = str1.str[i];

	for (int i = 0; i < str2.length; i++)
		cstr[str1.length + i] = str2.str[i];

	cstr[str1.length + str2.length] = '\0';

	return String(cstr);
}
