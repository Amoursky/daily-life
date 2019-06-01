#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

struct ListNode
{
	ListNode* _prev;
	ListNode* _next;
	int  _data;

	void* operator new(size_t n)//自定义new
	{
		void* p = allocator<ListNode>().allocate(1);
		cout << "mem poll allocate" << endl;
		return p;
	}

	void operator delete(void* p)//自定义delete
	{
		allocator<ListNode>().deallocate((ListNode*)p, 1);
		cout << "mem pool deallocate" << endl;
	}
};

class List
{
public:
	List()
	{
		_head = new ListNode;
		_head->_next = _head;
		_head->_prev = _head;
		cout << "gouzaohanshu"<<endl;
	}
	~List()
	{
		cout << "xigouhanshu" << endl;
		ListNode* cur = _head->_next;
		while (cur != _head)
		{
			ListNode* next = cur->_next;
			delete cur;
		}
		delete _head;
		_head = nullptr;
		
	}
private:
	ListNode* _head;
};

int main()
{
	List I;
	//system("pause");
	return 0;	
}