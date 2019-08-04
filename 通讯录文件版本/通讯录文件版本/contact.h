#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#define PEO_MAX 2   //�Զ���տ�ʼ��ϵ���б������
#define NAME_MAX 10 //�Զ���Ϊ���ַ���ռ�Ĵ�С

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
	char name[NAME_MAX];//����
	int age;//����
	char sex[5];//�Ա�
	char number[20];//�绰����
	char address[10];//סַ
}peoinfo;

typedef struct contact
{
	peoinfo *people;//ά����̬���ٵ��ڴ棻
	int count;//��ǰ��ϵ�˵�����
	int sz;//��ǰͨѶ¼������

}contact;

void init_contact(contact* pcon);//��ʼ����ϵ��
void add_contact(contact* pcon);//�����ϵ��
void show_contact(const contact* pcon);//��ʾ��ϵ��
void dele_contact(contact* pcon);//ɾ����ϵ��
void serch_contact(const contact* pcon);//��ѯ��ϵ��
void modifi_contact(contact* pcon);//�޸���ϵ��
void sort_contact(contact* pcon);//������ϵ��
int CheckCapacity(contact* pcon);//��̬�ڴ�����
void DestroyContact(contact* pcon);//�ͷŶ�̬�ڴ�
void save_contact(contact* pcon);//�����ݱ��浽�ļ�
void read_contact(contact* pcon);//��ȡ���ݵ�����