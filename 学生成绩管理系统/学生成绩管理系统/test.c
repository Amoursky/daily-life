#define _CRT_SECURE_NO_WARNINGS 1
#include "manage.h"

void menu()
{
	printf("*********************************************\n");
	printf("***************  WELCOM  ********************\n");
	printf("*********************************************\n");
	printf("*******   1.add            2.dele    ********\n");//���ѧ����Ϣ   ɾ��ѧ����Ϣ
	printf("*******   3.search         4.show    ********\n");//��ѯѧ����Ϣ  �鿴ѧ����Ϣ
	printf("*******   5.modifi         6.sort    ********\n");//�޸�ѧ����Ϣ   ����ѧ����Ϣ
	printf("*******           0.esc              ********\n");//  �˳�����
	printf("*********************************************\n");
}
void test()
{
	contact my_contact = { 0 };
	init_contact(&my_contact);//��ʼ��ѧ����Ϣ��
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			add_contact(&my_contact);//���ѧ����Ϣ
			break;
		case dele:
			dele_contact(&my_contact);//ɾ��ѧ����Ϣ
			break;
		case search:
			serch_contact(&my_contact);//��ѯѧ����Ϣ
			break;
		case show:
			show_contact(&my_contact);//�鿴ѧ����Ϣ
			break;
		case modifi:
			modifi_contact(&my_contact);//�޸�ѧ����Ϣ
			break;
		case sort:
			sort_contact(&my_contact);//����ѧ����Ϣ
			break;
		case esc:
			save_contact(&my_contact);//�����ݱ��浽�ļ���
			DestroyContact(&my_contact);//�ͷŶ�̬�ڴ�
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);

}
int main()
{
	test();
	system("pause");
	return 0;
}