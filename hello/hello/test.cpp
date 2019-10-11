#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
//#include<string.h>
using namespace std;

class String
{
public:
	String(const char* str = "jack")
	{
		cout << "gouzao" << endl;
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}

	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}

private:
	char* _str;
};

class Person
{
private:
	String _name;
	int _age;
};


int main()
{
	//cout << "hello world!" << endl;
	Person p;
	//system("pause");
	return 0;
}
