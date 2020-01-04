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

BTNode* BinaryTreeCreate(BTDataType* a, int *pindex);//创建二叉树
void BinaryTreeDestory(BTNode* root);//销毁二叉树
int BinaryTreeSize(BTNode* root);//计算二叉树的结点个数
int BinaryTreeLeafSize(BTNode* root);//计算二叉树叶子结点的个数
int BinaryTreeLevelkSize(BTNode* root, int k);//计算第k层结点的个数
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);//找到元素为x的结点，并返回该指针
void BinaryTreePreorder(BTNode* root);//先序遍历
void BinaryTreeInorder(BTNode* root);//中序遍历
void BinaryTreePostorder(BTNode* root);//后序遍历
