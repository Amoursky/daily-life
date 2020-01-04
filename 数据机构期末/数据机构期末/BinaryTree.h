#pragma once
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<assert.h>
typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

BTNode* BinaryTreeCreate(BTDataType* a, int *pindex);//����������
void BinaryTreeDestory(BTNode* root);//���ٶ�����
int BinaryTreeSize(BTNode* root);//����������Ľ�����
int BinaryTreeLeafSize(BTNode* root);//���������Ҷ�ӽ��ĸ���
int BinaryTreeLevelkSize(BTNode* root, int k);//�����k����ĸ���
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);//�ҵ�Ԫ��Ϊx�Ľ�㣬�����ظ�ָ��
void BinaryTreePreorder(BTNode* root);//�������
void BinaryTreeInorder(BTNode* root);//�������
void BinaryTreePostorder(BTNode* root);//�������
