#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//ֻ����ջ�ϴ����������
//1.���캯��˽�л��������֯new�ؼ��ֵ�ִ���߼�
//2.�ṩ�����ӿڣ���ջ�ϴ�������
//3.�������޷��������󣬺������������ã������ӿڱ���Ϊstact�ӿ�


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

//����operator new������������˽�еģ����Ҳ�ʵ��
//���캯������

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