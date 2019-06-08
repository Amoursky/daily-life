#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void init_contact(contact* pcon)//��ʼ����ϵ���б�
{
	assert(pcon != NULL);
	pcon->count = 0;
	memset(pcon, '0', PEO_MAX*sizeof(pcon->people[0]));
	return;
}

void add_contact(contact* pcon)//�����ϵ��
{
	assert(pcon != NULL);
	if (pcon->count == PEO_MAX)
	{
		printf("��ϵ���б��������޷���ӣ�\n");
		return;
	}
	else
	{
		printf("��������ϵ�˵�������  ");
		scanf("%s", pcon->people[pcon->count].name);
		printf("��������ϵ�˵����䣺  ");
		scanf("%d", &(pcon->people[pcon->count].age));
		printf("��������ϵ�˵��Ա�  ");
		scanf("%s", pcon->people[pcon->count].sex);
		printf("��������ϵ�˵ĵ绰��  ");
		scanf("%s", pcon->people[pcon->count].number);
		printf("��������ϵ�˵�סַ��  ");
		scanf("%s", pcon->people[pcon->count].address);
		pcon->count++;
	}
	return;
}

void show_contact(const contact *pcon)//�鿴��ϵ��
{
	assert(pcon != NULL);
	if (pcon->count == 0)
	{
		printf("��ϵ���б�Ϊ�գ�\n");
		return;
	}
	int i = 0;
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "����", "����", "�Ա�", "�绰", "סַ");
	for (i = 0; i < pcon->count; i++)
	{
		printf("%-10s\t%-10d\t%-10s\t%-10s\t%-10s\t\n", pcon->people[i].name,
			pcon->people[i].age,
			pcon->people[i].sex,
			pcon->people[i].number,
			pcon->people[i].address);
	}

	return;
}

void dele_contact(contact *pcon)//ɾ����ϵ��
{
	assert(pcon != NULL);
	int i = 0;
	int j = 0;
	char name[NAME_MAX];
	if (pcon->count == 0)
	{
		printf("��ϵ���б�Ϊ�գ��޷�ɾ����\n");
		return;
	}
	printf("������Ҫɾ����ϵ�˵����֣�");
	scanf("%s", name);
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(name, pcon->people[i].name) == 0)
		{
			for (j = i; j < pcon->count; j++)
			{
				pcon->people[j] = pcon->people[j + 1];
			}
			pcon->count--;
			printf("ɾ���ɹ���\n");
			return;
		}
	}
	printf("��ϵ���б���û�д��ˣ�\n");
	return;
}

void serch_contact(const contact* pcon)//��ѯ��ϵ��
{
	assert(pcon != NULL);
	int i = 0;
	char name[NAME_MAX];
	if (pcon->count == 0)
	{
		printf("��ϵ���б�Ϊ�գ�\n");
		return;
	}
	printf("������Ҫ���ҵ���ϵ�˵����֣�");
	scanf("%s", name);
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(name, pcon->people[i].name) == 0)
		{
			printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "����", "����", "�Ա�", "�绰", "סַ");
			printf("%-10s\t%-10d\t%-10s\t%-10s\t%-10s\t\n", pcon->people[i].name,
				pcon->people[i].age,
				pcon->people[i].sex,
				pcon->people[i].number,
				pcon->people[i].address);
			return;
		}
	}
	printf("���޴��ˣ�\n");
}

void modifi_contact(contact* pcon)//�޸���ϵ��
{
	assert(pcon != NULL);
	int i = 0;
	char name[NAME_MAX];
	if (pcon->count == 0)
	{
		printf("��ϵ���б�Ϊ�գ�\n");
		return;
	}
	printf("������Ҫ�޸���ϵ�˵����֣�");
	scanf("%s", name);
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(name, pcon->people[i].name) == 0)
		{
			printf("�������޸ĺ���ϵ�˵�������  ");
			scanf("%s", pcon->people[i].name);
			printf("�������޸ĺ���ϵ�˵����䣺  ");
			scanf("%d", &(pcon->people[i].age));
			printf("�������޸ĺ���ϵ�˵��Ա�  ");
			scanf("%s", pcon->people[i].sex);
			printf("�������޸ĺ���ϵ�˵ĵ绰��  ");
			scanf("%s", pcon->people[i].number);
			printf("�������޸ĺ���ϵ�˵�סַ��  ");
			scanf("%s", pcon->people[i].address);
			printf("�޸ĳɹ���\n");
			return;
		}
	}
	printf("��ϵ���б���û�д��ˣ�\n");
	return;
}

void sort_contact(contact* pcon)//����ϵ������(ð������)
{
	assert(pcon != NULL);
	int i = 0;
	int j = 0;
	int flag = 0;
	peoinfo tmp;
	if (pcon->count == 0)
	{
		printf("��ϵ���б�Ϊ�գ�\n");
		return;
	}
	for (i = 0; i < pcon->count; i++)//ȷ������
	{
		flag = 1;
		for (j = 0; j < (pcon->count - i - 1); j++)
		{
			if (strcmp(pcon->people[j].name, pcon->people[j + 1].name)>0)
			{
				tmp = pcon->people[j];
				pcon->people[j] = pcon->people[j + 1];
				pcon->people[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			printf("����ɹ���\n");
			return;
		}
	}
}