#ifndef __GAME_H_
#define __GAME_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 9//���̵�������
#define COL 9//���̵�������
#define NUMBER 79//�����׵ĸ�����



void meau();//�˵�������
void game();//��Ϸ���⣻
void test();//���Ժ�����
void init_conceal();//��ʼ����ʵ���麯����
void init_show();//��ʼ����ʾ���麯����
void output_conceal();//��ӡ��ʵ���飻
void output_show();//��ӡ��ʾ���飻
void set();//������ף�
void find();//���׺�����
void spread();//չ��������������Χû����ʱ����չ�������轫���в����׵����궼���룻
int judge();//�ж�ʣ���'*'�Ƿ�����׵ĸ�����
#endif   //__GAME_H_