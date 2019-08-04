#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
using namespace std;

//typedef int DataType;

template<class T>

class Vector                  //以后实现具有拷贝构造的功能
{
public:
	Vector(size_t capacity = 5)
		:_data(new T[capacity])
		, _size(0)
		, _capacity(capacity)
	{}

	void PushBack(T x)
	{
		//check capacity
		_data[_size++] = x;
	}

	const T& operator[](size_t i) const//返回引用，使其可读可写
	{
		assert(i < _size);
		return _data[i];
	}

	T& operator[](size_t i)//返回引用，使其可读可写
	{
		assert(i < _size);
		return _data[i];
	}

   size_t Size() const
	{
		return _size;
	}

	~Vector()
	{
		if (_data)
		{
			delete[] _data;
			_data = nullptr;
			_size = 0;
			_capacity = 0;
		}
	}

private:
	T* _data;
	size_t _size;
	size_t _capacity;
};

void printVector(const Vector<int>& v1)
{
	for (int i = 0; i < v1.Size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

int main()
{
	Vector<int> v1;//类模板必须实例化
	v1.PushBack(1);
	v1.PushBack(2);
	v1.PushBack(3);
	v1.PushBack(4);

	for (int i = 0; i < v1.Size(); i++)
	{
		v1[i] = 10;
		cout << v1[i] << " ";
	}
	cout << endl;

	Vector<char> v2;
	v2.PushBack('a');
	v2.PushBack('b');
	v2.PushBack('c');
	v2.PushBack('d');

	for (int i = 0; i < v2.Size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	return 0;
}