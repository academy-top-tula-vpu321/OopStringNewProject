#pragma once
#include <iostream>

class String
{
	char* str;
	int length;
public:
	String();
	String(int length);
	String(const char* cstr);
	String(char symbol);
	String(char symbol, int count);

	friend String operator+(const String& str1, const String& str2);
	friend String operator+(String str, char* cstr);
	friend String operator+(char* cstr, String str);

	friend String operator*(String str, int count);

	void Print();

	~String();
};

