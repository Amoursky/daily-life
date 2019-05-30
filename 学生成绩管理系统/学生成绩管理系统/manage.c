#define _CRT_SECURE_NO_WARNINGS 1
#include "manage.h"

void init_contact(contact* pcon)//��ʼ���б�
{
	assert(pcon != NULL);
	pcon->count = 0;//��ʼ������
	pcon->sz = PEO_MAX;
	pcon->people = (stuinfo*)malloc(PEO_MAX*sizeof(stuinfo));//Ϊ�б�����̬�ڴ�
	if (pcon->people == NULL)
	{
		printf("%s\n", strerror(errno));//��ӡ������Ϣ
		return;
	}
	memset(pcon->people, '0', PEO_MAX*sizeof(stuinfo));
	read_contact(pcon);
	return;
}

void add_contact(contact* pcon)//���ѧ����Ϣ
{
	assert(pcon != NULL);
	if (1 == CheckCapacity(pcon))
	{
		printf("������ѧ����ѧ�ţ�  ");
		scanf("%s", pcon->people[pcon->count].student);
		printf("������ѧ����������  ");
		scanf("%s", pcon->people[pcon->count].name);
		printf("������ѧ�������ĳɼ���  ");
		scanf("%d", &(pcon->people[pcon->count].yuwen));
		printf("������ѧ������ѧ�ɼ���  ");
		scanf("%d", &(pcon->people[pcon->count].shuxue));
		printf("������ѧ����Ӣ��ɼ���  ");
		scanf("%d", &(pcon->people[pcon->count].yingyu));
		pcon->count++;
		return;
	}
}

void show_contact(const contact *pcon)//�鿴ѧ����Ϣ
{
	assert(pcon != NULL);
	if (pcon->count == 0)
	{
		printf("��ϵ���б�Ϊ�գ�\n");
		return;
	}
	int i = 0;
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "ѧ��", "����", "����", "��ѧ", "Ӣ��");
	for (i = 0; i < pcon->count; i++)
	{
		printf("%-10s\t%-10s\t%-10d\t%-10d\t%-10d\t\n", pcon->people[i].student,
			pcon->people[i].name,
			pcon->people[i].yuwen,
			pcon->people[i].shuxue,
			pcon->people[i].yingyu);
	}

	return;
}

void dele_contact(contact *pcon)//ɾ��ѧ����Ϣ
{
	assert(pcon != NULL);
	int i = 0;
	int j = 0;
	char student[20];
	if (pcon->count == 0)
	{
		printf("ѧ����Ϣ�б�Ϊ�գ��޷�ɾ����\n");
		return;
	}
	printf("������Ҫɾ��ѧ����ѧ�ţ�");
	scanf("%s", student);
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(student, pcon->people[i].student) == 0)
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
	printf("ѧ����Ϣ�б���û�д��ˣ�\n");
	return;
}

void serch_contact(const contact* pcon)//��ѯѧ����Ϣ
{
	int input = 0;
	printf("��ѧ�Ų�ѯ���ǰ���߷ֲ�ѯ����ѧ�������� 1����߷������� 2��\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		assert(pcon != NULL);
		int i = 0;
		char student[20];
		if (pcon->count == 0)
		{
			printf("ѧ����Ϣ�б�Ϊ�գ�\n");
			return;
		}
		printf("������Ҫ���ҵ�ѧ����ѧ�ţ�");
		scanf("%s", student);
		for (i = 0; i < pcon->count; i++)
		{
			if (strcmp(student, pcon->people[i].student) == 0)
			{
				printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "ѧ��", "����", "����", "��ѧ", "Ӣ��");
				printf("%-10s\t%-10s\t%-10d\t%-10d\t%-10d\t\n", pcon->people[i].student,
					pcon->people[i].name,
					pcon->people[i].yuwen,
					pcon->people[i].shuxue,
					pcon->people[i].yingyu);
				return;
			}
		}
		printf("���޴��ˣ�\n");
		return;
	case 2:
		assert(pcon != NULL);
		if (pcon->count == 0)
		{
			printf("ѧ����Ϣ�б�Ϊ�գ�\n");
			return;
		}
		i = 0;
		int j = 0;
		int max = 0;
		int a = 0;
		printf("������߷������� 1����ѧ��߷������� 2��Ӣ����߷������� 3\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			for (i = 0; i < pcon->count; i++)
			{
				if (pcon->people[i].yuwen>max)
					max = pcon->people[i].yuwen;
			}
			for (j = 0; j < pcon->count; j++)
			{
				if (pcon->people[j].yuwen == max)
				{
					printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "ѧ��", "����", "����", "��ѧ", "Ӣ��");
					printf("%-10s\t%-10s\t%-10d\t%-10d\t%-10d\t\n", pcon->people[j].student,
						pcon->people[j].name,
						pcon->people[j].yuwen,
						pcon->people[j].shuxue,
						pcon->people[j].yingyu);
					return;
				}
			}
		case 2:
			i = 0;
			j = 0;
			max = 0;
			for (i = 0; i < pcon->count; i++)
			{
				if (pcon->people[i].shuxue>max)
					max = pcon->people[i].shuxue;
			}
			for (j = 0; j < pcon->count; j++)
			{
				if (pcon->people[j].shuxue == max)
				{
					printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "ѧ��", "����", "����", "��ѧ", "Ӣ��");
					printf("%-10s\t%-10s\t%-10d\t%-10d\t%-10d\t\n", pcon->people[j].student,
						pcon->people[j].name,
						pcon->people[j].yuwen,
						pcon->people[j].shuxue,
						pcon->people[j].yingyu);
					return;
				}
			}
		case 3:
			i = 0;
			j = 0;
			max = 0;
			for (i = 0; i < pcon->count; i++)
			{
				if (pcon->people[i].yingyu>max)
					max = pcon->people[i].yingyu;
			}
			for (j = 0; j < pcon->count; j++)
			{
				if (pcon->people[j].yingyu == max)
				{
					printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "ѧ��", "����", "����", "��ѧ", "Ӣ��");
					printf("%-10s\t%-10s\t%-10d\t%-10d\t%-10d\t\n", pcon->people[j].student,
						pcon->people[j].name,
						pcon->people[j].yuwen,
						pcon->people[j].shuxue,
						pcon->people[j].yingyu);
					return;
				}
			}
		default:
			printf("ѡ�����������ѡ��\n");
			return;
		}
	default:
		printf("ѡ�����������ѡ��\n");
		return;
	}
}

void modifi_contact(contact* pcon)//�޸�ѧ����Ϣ
{
	assert(pcon != NULL);
	int i = 0;
	char student[20];
	if (pcon->count == 0)
	{
		printf("ѧ����Ϣ�б�Ϊ�գ�\n");
		return;
	}
	printf("������Ҫ�޸�ѧ����ѧ�ţ�");
	scanf("%s", student);
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(student, pcon->people[i].student) == 0)
		{
			printf("�������޸ĺ�ѧ����ѧ�ţ�  ");
			scanf("%s", pcon->people[i].student);
			printf("�������޸ĺ�ѧ����������  ");
			scanf("%s", pcon->people[i].name);
			printf("�������޸ĺ�ѧ�������ĳɼ���  ");
			scanf("%d", &(pcon->people[i].yuwen));
			printf("�������޸ĺ�ѧ������ѧ�ɼ���  ");
			scanf("%d", &(pcon->people[i].shuxue));
			printf("�������޸ĺ�ѧ����Ӣ��ɼ���  ");
			scanf("%d", &(pcon->people[i].yingyu));
			printf("�޸ĳɹ���\n");
			return;
		}
	}
	printf("ѧ���б���û�д��ˣ�\n");
	return;
}

void sort_contact(contact* pcon)//��ѧ������
{
	int input = 0;
	printf("������������������ 1�������ܷ����������� 2\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		assert(pcon != NULL);
		int i = 0;
		int j = 0;
		int flag = 0;
		stuinfo tmp;
		if (pcon->count == 0)
		{
			printf("ѧ����Ϣ�б�Ϊ�գ�\n");
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
	case 2:
		assert(pcon != NULL);
		if (pcon->count == 0)
		{
			printf("ѧ����Ϣ�б�Ϊ�գ�\n");
			return;
		}
		i = 0;
		j = 0;

		for (i = 0; i < pcon->count; i++)//ȷ������
		{
			flag = 1;
			for (j = 0; j < (pcon->count - i - 1); j++)
			{
				if ((pcon->people[j].yuwen + pcon->people[j].shuxue + pcon->people[j].yingyu)<(pcon->people[j + 1].yuwen + pcon->people[j + 1].shuxue + pcon->people[j + 1].yingyu))
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
	default:
		printf("ѡ�����������ѡ��\n");
		return;
	}
}

int CheckCapacity(contact* pcon)//�����Ƿ���Ҫ���ݺ���
{
	assert(pcon != NULL);
	if (pcon->sz == pcon->count)
	{
		stuinfo* tmp = (stuinfo*)realloc(pcon->people, (pcon->sz + 2)*sizeof(stuinfo));
		if (tmp != NULL)
		{
			pcon->people = tmp;
			pcon->sz += 2;
			//printf("���ݳɹ���\n");//���ݳɹ���ʵ������ʱ���ô�ӡ��
			return 1;
		}
		else
		{
			printf("%s\n", strerror(errno));//��ӡ������Ϣ
			return 0;
		}
	}
	else
	{
		return 1;
	}
}

void DestroyContact(contact* pcon)//�ͷŶ�̬�ڴ�
{
	assert(pcon != NULL);
	free(pcon->people);
	pcon->people = NULL;
	pcon->sz = 0;
	pcon->count = 0;
}

void save_contact(contact* pcon)//�����ݱ��浽�ļ�
{
	assert(pcon != NULL);
	int i = 0;
	FILE* pfin = fopen("student.txt", "wb");
	if (pfin == NULL)
	{
		perror("open file for write:");//���ļ�ʧ�ܺ��ӡ������Ϣ
		return;
	}
	for (i = 0; i < pcon->count; i++)
	{
		fwrite(pcon->people + i, sizeof(stuinfo), 1, pfin);
	}
	fclose(pfin);//�ر��ļ�
	pfin = NULL;
	printf("����ɹ�\n");
	return;
}

void read_contact(contact* pcon)//��ȡ�ļ��е����ݵ�����
{
	assert(pcon != NULL);
	stuinfo tmp = { 0 };
	FILE* pfout = fopen("student.txt", "rb");
	if (pfout == NULL)
	{
		perror("open file for read:");
		return;
	}
	while (fread(&tmp, sizeof(stuinfo), 1, pfout))
	{
		CheckCapacity(pcon);//����Ƿ���Ҫ����
		pcon->people[pcon->count] = tmp;
		pcon->count++;
	}
	fclose(pfout);
	pfout = NULL;
	//printf("�����������!\n");//����������ɣ�ʵ������ʱ����չʾ��
	return;
}