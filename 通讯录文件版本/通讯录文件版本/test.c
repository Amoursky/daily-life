#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("*********************************************\n");
	printf("*******   1.add            2.dele    ********\n");//�����ϵ��   ɾ����ϵ��
	printf("*******   3.search         4.show    ********\n");//��ѯ��ϵ��   �鿴��ϵ��
	printf("*******   5.modifi         6.sort    ********\n");//�޸���ϵ��   ������ϵ��
	printf("*******           0.esc              ********\n");//  �˳�ͨѶ¼
	printf("*********************************************\n");
}
void test()
{
	contact my_contact = { 0 };
	init_contact(&my_contact);//��ʼ����ϵ�ˣ�
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			add_contact(&my_contact);//�����ϵ��
			break;
		case dele:
			dele_contact(&my_contact);//ɾ����ϵ��
			break;
		case search:
			serch_contact(&my_contact);//��ѯ��ϵ��
			break;
		case show:
			show_contact(&my_contact);//�鿴��ϵ��
			break;
		case modifi:
			modifi_contact(&my_contact);//�޸���ϵ��
			break;
		case sort:
			sort_contact(&my_contact);//������ϵ��
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