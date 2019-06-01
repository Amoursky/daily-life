#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//只能在栈上创建对象的类
//1.构造函数私有化，间接组织new关键字的执行逻辑
//2.提供公共接口：在栈上创建对象
//3.在类外无法创建对象，函数用类名调用，公共接口必须为stact接口


class Stack
{
public:
	static Stack getStack()
	{
		return Stack();
	}
private:
	Stack()
	{}
};

//重载operator new函数，声明成私有的，并且不实现
//构造函数公有

class Stack2
{
public:
	void* operator new(size_t n) = delete;
private:
	//void* operator new(size_t n);
    
};

int main()
{
	//Stack* ps = new Stack;
	Stack s = Stack::getStack();
	Stack cp(s);
	//Stack2 ps = new Stack2;
	return 0;
}