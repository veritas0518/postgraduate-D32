//#include<stdio.h>
//#include<stdlib.h>
//typedef int KeyType;
//typedef struct node
//{
//	KeyType key;
//	struct node* lchild, * rchild;
//}BSTNode;
//typedef BSTNode* BSTree;
//
//void InsBST(BSTree* T, KeyType Key)//插入 
//{
//	BSTNode* f = NULL, * p;
//	p = (*T);
//	while (p)
//	{
//		if (p->key == Key)
//		{
//			printf("The node(%d) already exist.\n", Key);
//			return;
//		}
//		f = p;
//		p = (Key < p->key) ? p->lchild : p->rchild;
//	}
//	p = (BSTNode*)malloc(sizeof(BSTNode));
//	p->key = Key;
//	p->lchild = p->rchild = NULL;
//	if ((*T) == NULL)
//		(*T) = p;
//	else if (Key < f->key)
//		f->lchild = p;
//	else f->rchild = p;
//}
//
//BSTree CreatBST(void)//创建 
//{
//	BSTree T;
//	int Key;
//	T = NULL;
//	scanf("%d", &Key);
//	while (Key)
//	{
//		InsBST(&T, Key);
//		scanf("%d", &Key);
//	}
//	return T;
//}
//
//void SearchBST(BSTree T, KeyType Key)//查找 
//{
//	BSTNode* p = T;
//	while (p)
//	{
//		if (p->key == Key)
//		{
//			printf("The node(%d) Search Succeed.\n", Key);
//			return;
//		}
//		p = (Key < p->key) ? p->lchild : p->rchild;
//	}
//	printf("The node(%d) not exist.\n", Key);
//}
//
//void DelBSTNode(BSTree* T, KeyType Key)//删除 
//{
//	BSTNode* parent = NULL, * p, * q, * child;
//	p = *T;
//	while (p)
//	{
//		if (p->key == Key)
//			break;
//		parent = p;
//		p = (Key < p->key) ? p->lchild : p->rchild;
//	}
//	if (!p)
//	{
//		printf("The node(%d) not exist.\n", Key);
//		return;
//	}
//	q = p;
//	if (q->lchild && q->rchild)
//		for (parent = q, p = q->rchild; p->lchild; parent = p, p = p->lchild);
//	child = (p->lchild) ? p->lchild : p->rchild;
//	if (!parent)
//		*T = child;
//	else
//	{
//		if (p == parent->lchild)
//			parent->lchild = child;
//		else
//			parent->rchild = child;
//		if (p != q)	q->key = p->key;
//	}
//	free(p);
//}
//
//void InorderBSTree(BSTree T)//中序输出 
//{
//	if (T != NULL)
//	{
//		InorderBSTree(T->lchild);
//		printf("%d ", T->key);
//		InorderBSTree(T->rchild);
//	}
//
//}
//
//int main() {
//	BSTree T;
//	KeyType Key;
//	T = CreatBST();
//	InorderBSTree(T);
//	printf("\n");
//	scanf("%d\n", &Key);
//	SearchBST(T, Key);
//	scanf("%d\n", &Key);
//	InsBST(&T, Key);
//	InorderBSTree(T);
//	printf("\n");
//	scanf("%d\n", &Key);
//	DelBSTNode(&T, Key);
//	InorderBSTree(T);
//	printf("\n");
//	return 0;
//}