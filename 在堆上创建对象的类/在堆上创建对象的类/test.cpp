#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//ֻ���ڶ��ϴ����������
//1.���캯��˽�л�
//2.�ṩ�����ӿڣ��ڶ��ϴ�������
//3.�������޷��������󣬺������������ã������ӿڱ���Ϊstatic�ӿ�
//4.��ֹ������<1>��������˽�л���ֻ������ʵ��
//            <2>������������delete������c++11��

class Heap
{
	friend void fun1();
public:
	static Heap* getHeap()//��̬��Ϊ������������������
	{
		return new Heap;
	}
	
	Heap(const Heap& hp)= delete;//�ѿ������춨���һ��ɾ����������ʹ�ǹ��е�Ҳ���ܵ���

private:
	Heap(){}//˽�л����캯��
	//Heap(const Heap& hp);//˽�л��������캯��
};

//Heap::Heap(const Heap& hp)
//{}

void fun1()
{
	Heap* hp = Heap::getHeap();
	//Heap hp2(*hp);
}

int main()
{
	Heap* hp = Heap::getHeap();
	//Heap hp2(*hp);
	return 0;
}