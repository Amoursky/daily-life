#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define PEO_MAX 3   //�Զ�����ϵ���б����ɵ���ϵ������
#define NAME_MAX 10

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
	struct peoinfo people[PEO_MAX];//��̬�汾����
	int count;
}contact;

void init_contact(contact* pcon);//��ʼ����ϵ���б�
void add_contact(contact* pcon);//�����ϵ��
void show_contact(const contact* pcon);//��ʾ��ϵ��
void dele_contact(contact* pcon);//ɾ����ϵ��
void serch_contact(const contact* pcon);//��ѯ��ϵ��
void modifi_contact(contact* pcon);//�޸���ϵ��
void sort_contact(contact* pcon);//������ϵ��