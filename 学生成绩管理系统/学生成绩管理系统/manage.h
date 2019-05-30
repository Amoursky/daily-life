#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#define PEO_MAX 2   //�Զ���տ�ʼ������
#define NAME_MAX 10 //�Զ���Ϊ���ַ���ռ�Ĵ�С

enum num //ö�ٳ���
{
	esc,
	add,
	dele,
	search,
	show,
	modifi,
	sort,
};

typedef struct stuinfo
{
	char student[20];//ѧ��
	char name[NAME_MAX];//����
	int yuwen;//���ĳɼ�
	int shuxue;//��ѧ�ɼ�
	int yingyu;//Ӣ��ɼ�
}stuinfo;

typedef struct contact
{
	stuinfo *people;//ά����̬���ٵ��ڴ棻
	int count;//��ǰѧ��������
	int sz;//��ǰ�ռ������

}contact;

void init_contact(contact* pcon);//��ʼ��ѧ����Ϣ�б�
void add_contact(contact* pcon);//���ѧ����Ϣ
void show_contact(const contact* pcon);//��ʾѧ����Ϣ
void dele_contact(contact* pcon);//ɾ��ѧ����Ϣ
void serch_contact(const contact* pcon);//��ѯѧ����Ϣ
void modifi_contact(contact* pcon);//�޸�ѧ����Ϣ
void sort_contact(contact* pcon);//����ѧ����Ϣ
int CheckCapacity(contact* pcon);//��̬�ڴ����ݣ�����Ƿ���Ҫ���ݣ�
void DestroyContact(contact* pcon);//�ͷŶ�̬�ڴ�
void save_contact(contact* pcon);//�����ݱ��浽�ļ�
void read_contact(contact* pcon);//��ȡ���ݵ�����