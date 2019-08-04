#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void init_contact(contact* pcon)//初始化联系人列表
{
	assert(pcon != NULL);
	pcon->count = 0;//初始化通讯录中联系人个数
	pcon->sz = PEO_MAX;
	pcon->people = (peoinfo*)malloc(PEO_MAX*sizeof(peoinfo));//为通讯录创建动态内存
	if (pcon->people == NULL)
	{
		printf("%s\n", strerror(errno));//打印错误信息
		return;
	}
	memset(pcon->people, '0', PEO_MAX*sizeof(peoinfo));
	read_contact(pcon);
	return;
}

void add_contact(contact* pcon)//添加联系人
{
	assert(pcon != NULL);
	if (1 == CheckCapacity(pcon))
	{
		printf("请输入联系人的姓名：  ");
		scanf("%s", pcon->people[pcon->count].name);
		printf("请输入联系人的年龄：  ");
		scanf("%d", &(pcon->people[pcon->count].age));
		printf("请输入联系人的性别：  ");
		scanf("%s", pcon->people[pcon->count].sex);
		printf("请输入联系人的电话：  ");
		scanf("%s", pcon->people[pcon->count].number);
		printf("请输入联系人的住址：  ");
		scanf("%s", pcon->people[pcon->count].address);
		pcon->count++;
		return;
	}
}

void show_contact(const contact *pcon)//查看联系人
{
	assert(pcon != NULL);
	if (pcon->count == 0)
	{
		printf("联系人列表为空！\n");
		return;
	}
	int i = 0;
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "姓名", "年龄", "性别", "电话", "住址");
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

void dele_contact(contact *pcon)//删除联系人
{
	assert(pcon != NULL);
	int i = 0;
	int j = 0;
	char name[NAME_MAX];
	if (pcon->count == 0)
	{
		printf("联系人列表为空，无法删除！\n");
		return;
	}
	printf("请输入要删除联系人的名字：");
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
			printf("删除成功！\n");
			return;
		}
	}
	printf("联系人列表中没有此人！\n");
	return;
}

void serch_contact(const contact* pcon)//查询联系人
{
	assert(pcon != NULL);
	int i = 0;
	char name[NAME_MAX];
	if (pcon->count == 0)
	{
		printf("联系人列表为空！\n");
		return;
	}
	printf("请输入要查找的联系人的名字：");
	scanf("%s", name);
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(name, pcon->people[i].name) == 0)
		{
			printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t\n", "姓名", "年龄", "性别", "电话", "住址");
			printf("%-10s\t%-10d\t%-10s\t%-10s\t%-10s\t\n", pcon->people[i].name,
				pcon->people[i].age,
				pcon->people[i].sex,
				pcon->people[i].number,
				pcon->people[i].address);
			return;
		}
	}
	printf("查无此人！\n");
}

void modifi_contact(contact* pcon)//修改联系人
{
	assert(pcon != NULL);
	int i = 0;
	char name[NAME_MAX];
	if (pcon->count == 0)
	{
		printf("联系人列表为空！\n");
		return;
	}
	printf("请输入要修改联系人的名字：");
	scanf("%s", name);
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(name, pcon->people[i].name) == 0)
		{
			printf("请输入修改后联系人的姓名：  ");
			scanf("%s", pcon->people[i].name);
			printf("请输入修改后联系人的年龄：  ");
			scanf("%d", &(pcon->people[i].age));
			printf("请输入修改后联系人的性别：  ");
			scanf("%s", pcon->people[i].sex);
			printf("请输入修改后联系人的电话：  ");
			scanf("%s", pcon->people[i].number);
			printf("请输入修改后联系人的住址：  ");
			scanf("%s", pcon->people[i].address);
			printf("修改成功！\n");
			return;
		}
	}
	printf("联系人列表中没有此人！\n");
	return;
}

void sort_contact(contact* pcon)//给联系人排序(冒泡排序)
{
	assert(pcon != NULL);
	int i = 0;
	int j = 0;
	int flag = 0;
	peoinfo tmp;
	if (pcon->count == 0)
	{
		printf("联系人列表为空！\n");
		return;
	}
	for (i = 0; i < pcon->count; i++)//确定趟数
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
			printf("排序成功！\n");
			return;
		}
	}
}

int CheckCapacity(contact* pcon)//检验是否需要扩容函数
{
	assert(pcon != NULL);
	if (pcon->sz == pcon->count)
	{
		peoinfo* tmp = (peoinfo*)realloc(pcon->people, (pcon->sz + 2)*sizeof(peoinfo));
		if (tmp != NULL)
		{
			pcon->people = tmp;
			pcon->sz += 2;
			//printf("扩容成功！\n");//扩容成功，实际运行时不用打印；
			return 1;
		}
		else
		{
			printf("%s\n", strerror(errno));//打印错误信息
			return 0;
		}
	}
	else
	{
		return 1;
	}
}

void DestroyContact(contact* pcon)//释放动态内存
{
	assert(pcon != NULL);
	free(pcon->people);
	pcon->people = NULL;
	pcon->sz = 0;
	pcon->count = 0;
}

void save_contact(contact* pcon)//把数据保存到文件
{
	assert(pcon!=NULL);
	int i = 0;
	FILE* pfin = fopen("contact.txt","wb");
	if (pfin == NULL)
	{
		perror("open file for write:");//打开文件失败后打印错误信息
		return;
	}
	for (i = 0; i < pcon->count; i++)
	{
		fwrite(pcon->people + i, sizeof(peoinfo),1,pfin);
	}
	fclose(pfin);//关闭文件
	pfin = NULL;
	printf("保存成功\n");
	return;
}

void read_contact(contact* pcon)//读取文件中的数据到程序
{
	assert(pcon!=NULL);
	peoinfo tmp = { 0 };
	FILE* pfout = fopen("contact.txt","rb");
	if (pfout == NULL)
	{
		perror("open file for read:");
		return;
	}
	while (fread(&tmp,sizeof(peoinfo),1,pfout))
	{
		CheckCapacity(pcon);//检查是否需要扩容
		pcon->people[pcon->count] = tmp;
		pcon->count++;
	}
	fclose(pfout);
	pfout = NULL;
	//printf("加载数据完成!\n");//加载数据完成，实际运行时不用展示；
	return;
}