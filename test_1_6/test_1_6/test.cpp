#include<iostream>
#include<vector>
#include<string>
#include<assert.h>
using namespace std;
struct TreeNode
{
	string title;                //���±���
	vector<TreeNode*> link;   //��Ϊ���Ƕ������������Ƕ��������������һ���������洢����ǰ�ڵ���ӽڵ�   
	vector<vector<string>> vec;   //һ����ά�ַ������飬�����洢�ýڵ�����¾������� 
	int i;                  //��¼���ǵ�ǰ��������˼����ӽڵ�ĸ���
	TreeNode(string str)  //���캯��
	{
		title = str;
		link.resize(10, nullptr);
		i = 0;
	}
};
void LIST(TreeNode*& tree)  //����Ļ��������ĺ���
{
	TreeNode* p = new TreeNode("����Ļ�������");   //��������������Ľ��
	p->vec = {
		{ "����ĳ�ʼ��" },
		{ "struct Node" },
		{ "{" },
		{ "	Node* next;" },
		{ "	int val;" },
		{ "Node(int number)" },
		{ "{" },
		{ "	val = number;" },
		{ "}" },
		{ "};" },
		{ "struct _List" },
		{ "{" },
		{ "	Node* head;" },
		{ "};" },
		{ "void Init(List& list)" },
		{ "{" },
		{ "	assert(!list)" },
		{ "	list.head  = nullptr" },
		{ "}" },
	};
	TreeNode* cur = new TreeNode("����Ĳ���");
	cur->vec = {
		{ "//ͷ��" },
		{ "void push(List& list,int number)" },
		{ "{" },
		{ "	Node* p = new Node(number);" },
		{ "	if(list.head == nullptr)" },
		{ "	{" },
		{ "		list.head = p;" },
		{ "	}" },
		{ "	else" },
		{ "	{" },
		{ "		Node* cur = list.head;" },
		{ "		list.head = p;" },
		{ "		p->next = cur;" },
		{ "	}" },
		{ "}" },
		{ "//β��" },
		{ "void SListPushBash(List& list, int number)" },
		{ "{" },
		{ "	Node *node = new Node(number);" },
		{ "	if (list->first == NULL)" },
		{ "	{" },
		{ "		list->first = node;" },
		{ "		return;" },
		{ "	}" },
		{ "	Node *cur = list->first;" },
		{ "	while(cur->next != NULL)" },
		{ "	{" },
		{ "		cur = cur->next;" },
		{ "	}//ֻҪcur->nextΪ����ôһ�������һ�����" },
		{ "	cur->next = node;" },
		{ "}" },
		{ "//��ָ��λ�ú���������" },
		{ "void SListInsertAfter(List& list, Node *pos, int number)" },
		{ "{" },
		{ "	Node *node = new Node(number);" },
		{ "	node->value = v;" },
		{ "	node->next = pos->next;" },
		{ "	pos->next = node;" },
		{ "}" },
	};
	p->link[p->i++] = cur;
	cur = new TreeNode("�����ɾ��");
	cur->vec = {
		{ "//ͷɾ" },
		{ "void toushan(SList *s)" },
		{ "{" },
		{ "	Node *p = s->first->next;" },
		{ "	free(s->first);" },
		{ "	s->first = p;" },
		{ "}" },
		{ "//βɾ" },
		{ "void PopBack2(List& list, int number)" },
		{ "{" },
		{ "	if (list->first->next == NULL)" },
		{ "	{" },
		{ "		delete(list->first);" },
		{ "		list->first = NULL;" },
		{ "	}" },
		{ "	else" },
		{ "	{" },
		{ "		Node *p = list->first;" },
		{ "		while (p->next->next != NULL)" },
		{ "			p = p->next;" },
		{ "		delete(p->next);" },
		{ "		p->next = NULL;" },
		{ "	}" },
		{ "}" },
		{ "//ָ��λ����ɾ��" },
		{ "void SListEraseAfter(List& list, Node *pos)" },
		{ "{" },
		{ "	Node *next = pos->next;" },
		{ "	pos->next = pos->next->next;" },
		{ "	delete(next);" },
		{ "}" },
		{ "//����" },
		{ "Node *SListFind(List& list, int number)" },
		{ "{" },
		{ "	Node *p;" },
		{ "	for (p = list->first; p != NULL; p = p->next)" },
		{ "	{" },
		{ "		if (p->value = number)" },
		{ "		{" },
		{ "			return p;" },
		{ "		}" },
		{ "	}" },
		{ "	return NULL;" },
		{ "}" },
	};
	p->link[p->i++] = cur;
	tree->link[tree->i++] = p;   //�����������֪ʶ�㣬���ӵ��ܵ����Ľ����

}
void TREE(TreeNode*& tree)  //���Ļ��������ĺ���
{
	TreeNode* p = new TreeNode("�������Ļ�������");
	p->vec = {
		{ "�������Ľ���ʼ��" },
		{ "typedef struct Node{" },
		{ "	int value;" },
		{ "	struct Node *left;" },
		{ "	struct Node *right;" },
		{ "}" },
		{ "void PreorderTraversal(Node *root)" },
		{ "	if (root == NULL){" },
		{ "		return;" },
		{ "	}" },
	};
	TreeNode* cur = new TreeNode("�����������ֱ�����ʽ");
	cur->vec = {
		{ "ǰ�����" },
		{ "void preorder(struct *root){" },
		{ "	if (root == NULL)" },
		{ "		return;" },
		{ "	printf(\"%d\", root->value); //��" },
		{ "	preorder(root->left); //������" },
		{ "	preorder��root->right); //������" },
		{ "}" },
		{ "�������" },
		{ "void preorder(struct *root){" },
		{ "	if (root == NULL)" },
		{ "		return;" },
		{ "	preorder(root->left); //������" },
		{ "	printf(\"%d\", root->value); //��" },
		{ "	preorder��root->right); //������" },
		{ "}" },
		{ "�������" },
		{ "void preorder(struct *root){" },
		{ "	if (root == NULL)" },
		{ "		return;" },
		{ "	preorder(root->left); //������" },
		{ "	preorder��root->right); //������" },
		{ "	printf(\"%d\", root->value); //��" },
		{ "}" },
	};
	p->link[p->i++] = cur;
	cur = new TreeNode("ǰ��������������ԭ������");
	cur->vec = {
		{ "struct TreeNode* buildTree(int* preorder, int preordersize, int *inorder, int inordersize)" },
		{ "{" },
		{ "	if (preordersize == 0)" },
		{ "		return nullptr;" },
		{ "	int rootvalue = preorder[0];" },
		{ "	int rindex = -1;" },
		{ "	for (int i = 0; i < inordersize; ++i)" },
		{ "	{" },
		{ "		if (rootvalue == inorder[i])" },
		{ "		{" },
		{ "			rindex = i;" },
		{ "			break;" },
		{ "		}" },
		{ "	}" },
		{ "	TreeNode* root = new TreeNode(rootvalue);" },
		{ "	root->left = buildTree(preorder + 1, preordersize, inorder, inordersize);" },
		{ "	root->right = buildTree(preorder + 1 + rindex, preordersize - 1 - rindex, inorder + rindex + 1, inordersize - rindex - 1);" },
		{ "	return root;" },
		{ "}" },
	};
	p->link[p->i++] = cur;
	cur = new TreeNode("�������Ĳ������");
	cur->vec = {
		{ "void func(TreeNode* tree)" },
		{ "{" },
		{ "	if (tree == nullptr)" },
		{ "		return;" },
		{ "	queue<TreeNode*> que;" },
		{ "	que.push(tree);" },
		{ "	while (!que.empty())" },
		{ "	{" },
		{ "		TreeNode* p = que.top();" },
		{ "		que.pop();" },
		{ "		cout << p->val<<" ";" },
		{ "		que.push(p->left);" },
		{ "		que.push(p->right);" },
		{ "	}" },
		{ "}" },
	};
	p->link[p->i++] = cur;
	tree->link[tree->i++] = p;
}


void DRAW(TreeNode*& tree)   //ͼ�ĸ���ĺ���
{
	TreeNode* p = new TreeNode("ͼ�Ļ�������");
	p->vec = {
		{ "����ͼ" },
		{ "��ͼ�����ж���Vi��Vj֮��ı�û�з������������Ϊ����ͼ������������֮��ı�������ż��Vi��Vj������ʾ��" },
		{ "����ż���Ǳ�ʾVi��Vj֮��ֻ��һ ���ߣ���û�з��򣬣�Vi��Vj��== ��Vj��Vi����" }
	};
	TreeNode* cur = new TreeNode("ͼ�ĸ���");
	cur->vec = {
		{ "����ͼ" },
		{ "��ͼ�����ж���Vi��Vj�ı��з������Ϊ����ͼ������������Vi��Vj�ı��з������������Ϊ����ߣ�Ҳ��Ϊ����" },
		{ "������ż< Vi, Vj > ��ʾ����ʾ��һ���ߴ�Viָ��Vj��< Vi, Vj > �� = < Vj, Vi >  ������ " }
	};
	p->link[p->i++] = cur;
	cur = new TreeNode("������ȫͼ");
	cur->vec = {
		{ "������ͼ�У����������������֮�䶼���ڱߣ���Ƹ�ͼΪ������Ȩͼ������n�������������ȫͼ��n*(n-1)/2���ߡ�" }
	};
	p->link[p->i++] = cur;
	cur = new TreeNode("������ȫͼ");
	cur->vec = {
		{ "������ͼ�У���������������㶼���ڷ���Ϊ�෴������������Ƹ�ͼΪ������ȫͼ������n*(n-1)���ߡ�" }
	};
	p->link[p->i++] = cur;
	cur = new TreeNode("ϡ��ͼ�ͳ���ͼ");
	cur->vec = {
		{ "������ģ���ĸ������Զ��Եģ�ͨ����Ϊ�߻�С��n*logn(n�Ƕ���ĸ�������ͼ��֮Ϊϡ��ͼ����֮Ϊ����ͼ��" }
	};
	p->link[p->i++] = cur;
	cur = new TreeNode("��Ȩͼ");
	cur->vec = {
		{ "��Щͼ�ı߻򻡴���������ص�ֵ�����ǳ�֮ΪȨ����Ȩͼ��֮Ϊ����" }
	};
	p->link[p->i++] = cur;
	tree->link[tree->i++] = p;
}

class Tree    //�����Ķ���
{
public:
	static void Add(TreeNode*& tree, TreeNode*& p)  //�����p���ӵ���tree�Ľṹ��
	{
		tree->link[tree->i] = p;
	}

	static void print(TreeNode*& tree)  //��������,��һ������Ҫ���þ��ǰѣ��洢����ֻ�����е�֪ʶ���ӡ����
	{
		if (!tree->title.empty())
		{
			cout << "\t\t" << tree->title << endl;
			if (!tree->vec.empty())
			{
				for (int j = 0; j < tree->vec.size(); ++j)
				{
					for (int i = 0; i < tree->vec[j].size(); ++i)
						cout << "\t\t" << tree->vec[j][i];
					cout << endl;
				}
			}
			for (int i = 0; i < tree->i; ++i)   //������һ��β�ݹ飬����ǰ�������ҵ����нڵ��������
			{
				print(tree->link[i]);
			}
		}
	}
};

vector<string>*& menu(TreeNode*& tree)   //�˵�
{
	vector<string>* vec = new vector<string>;
	if (!tree->title.empty())
	{
		cout << "\t\t\t\t" << tree->title << endl;
		cout << "\t\t\t" << "------------------------------------" << endl;
		int j = 1;
		for (int i = 0; i < tree->i; ++i)
		{
			if (tree->link[i] != nullptr)
			{
				cout << "\t\t\t" << j << "." << tree->link[i]->title << endl;
				cout << "\t\t\t" << "------------------------------------" << endl;
				vec->push_back(tree->link[i]->title);
				j++;
			}
		}
		cout << "\t\t\t" << "0.�˳�" << endl;
		cout << "\t\t\t" << "------------------------------------" << endl;

	}
	return vec;
}
int ѭ��(TreeNode*& tree, vector<string>*& vec)   //tree���������ܵĽ�㣬vec���ǽ���������µģ�����֪ʶ�����Ŀ����������ֻ����һ�����������������ݣ�����Ҫ����
{
	int a;
	cout << "\t\t\t\t" << "���������ѡ��" << endl;
	cout << "\t\t\t" << "�������½���ţ����½ڽ��в���,�˳�����0" << endl;
	cin >> a;
	system("cls");
	if (a == 0)
		return -1;
	if (a > vec->size() || a < 1)
		cout << "\t\t\t\t" << "�����������������" << endl;
	else
	{
		cout << "\t\t\t\t" << "��ѡ������Ҫ���еĲ���" << endl;
		int b;
		cout << "\t\t\t\t" << "1.ɾ�����½�" << endl;
		cout << "\t\t\t\t" << "2.�鿴���½�" << endl;
		cin >> b;
		system("cls");
		if (b == 1)
		{
			int count = 1;
			for (int i = 0; i < tree->i; ++i)
			{
				if (tree->link[i] != nullptr)
				{
					if (count++ == a)
					{
						delete tree->link[i];
						tree->link[i] = nullptr;
					}
				}
			}

			int flag = 0;
			for (int i = 0; i < tree->i; ++i)
			{
				if (tree->link[i] != nullptr)
					flag = 1;
			}
			if (flag == 0)
				return -1;
		}
		else if (b == 2)
		{
			Tree::print(tree->link[a - 1]);
		}
		else
		{
			cout << "\t\t\t\t" << "����Ƿ�,����������" << endl;
		}
	}
}
void test()
{
	TreeNode* tree = new TreeNode("|���ݽṹ֪ʶ���ܽ�|");
	LIST(tree);
	TREE(tree);
	DRAW(tree);
	vector<string>* vec;
	vec = menu(tree);
	while (1)
	{
		int ret = ѭ��(tree, vec);
		menu(tree);
		if (ret == -1)
			break;
	}
}
int main()
{
	test();
	return 0;
}
