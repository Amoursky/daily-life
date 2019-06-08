#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#define PEO_MAX 2   //自定义刚开始联系人列表的容量
#define NAME_MAX 10 //自定义为名字分配空间的大小

enum num
{
	esc,
	add,
	dele,
	search,
	show,
	modifi,
	sort,
};

typedef struct peoinfo
{
	char name[NAME_MAX];//姓名
	int age;//年龄
	char sex[5];//性别
	char number[20];//电话号码
	char address[10];//住址
}peoinfo;

typedef struct contact
{
	peoinfo *people;//维护动态开辟的内存；
	int count;//当前联系人的数量
	int sz;//当前通讯录的容量

}contact;

void init_contact(contact* pcon);//初始化联系人
void add_contact(contact* pcon);//添加联系人
void show_contact(const contact* pcon);//显示联系人
void dele_contact(contact* pcon);//删除联系人
void serch_contact(const contact* pcon);//查询联系人
void modifi_contact(contact* pcon);//修改联系人
void sort_contact(contact* pcon);//排序联系人
int CheckCapacity(contact* pcon);//动态内存扩容
void DestroyContact(contact* pcon);//释放动态内存
void save_contact(contact* pcon);//把数据保存到文件
void read_contact(contact* pcon);//读取数据到程序