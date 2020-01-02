//输出二叉树的深度
#include<iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

struct BinaryTreeNode
{
	int value;
	struct BinaryTreeNode *left;
	struct BinaryTreeNode *right;
};
struct BinaryTreeNode *CreateBinaryTreeNode(int value);
void ConnectTreeNodes(struct BinaryTreeNode *pRoot, struct BinaryTreeNode *pLeft, struct BinaryTreeNode *pRight);
void PrintTreeNode(struct BinaryTreeNode *pNode);
void PrintTree(struct BinaryTreeNode *pRoot);
int TreeDepth(struct BinaryTreeNode *pRoot);
void DestroyTree(struct BinaryTreeNode *pRoot);



void Test(struct BinaryTreeNode *pRoot, int expected)
{
	int result = TreeDepth(pRoot);
	if (result == expected)
		printf("test pass!\n");
	else
		printf("test fail!\n");
}
void Test1()
{
	printf("begin:\n");
	struct BinaryTreeNode *pNode1 = CreateBinaryTreeNode(1);
	struct BinaryTreeNode *pNode2 = CreateBinaryTreeNode(2);
	struct BinaryTreeNode *pNode3 = CreateBinaryTreeNode(3);
	struct BinaryTreeNode *pNode4 = CreateBinaryTreeNode(4);
	struct BinaryTreeNode *pNode5 = CreateBinaryTreeNode(5);
	struct BinaryTreeNode *pNode6 = CreateBinaryTreeNode(6);
	struct BinaryTreeNode *pNode7 = CreateBinaryTreeNode(7);
 
	ConnectTreeNodes(pNode1, pNode2, pNode3);
	ConnectTreeNodes(pNode2, pNode4, pNode5);
	ConnectTreeNodes(pNode3, NULL, pNode6);
	ConnectTreeNodes(pNode5, pNode7, NULL);
 
	Test(pNode1, 4);
	DestroyTree(pNode1);
	printf("end!\n");

}


struct BinaryTreeNode *CreateBinaryTreeNode(int value)
{
	struct BinaryTreeNode *pNode = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
	pNode->value = value;
	pNode->left = NULL;
	pNode->right = NULL;
	return pNode;
}
 
void ConnectTreeNodes(struct BinaryTreeNode *pRoot, struct BinaryTreeNode *pLeft, struct BinaryTreeNode *pRight)
{
	if (pRoot != NULL)
	{
		pRoot->left = pLeft;
		pRoot->right = pRight;
	}
}
void PrintTreeNode(struct BinaryTreeNode *pNode)
{
	if (pNode != NULL)
	{
		printf("the value of this node is :%d\n", pNode->value);
		if (pNode->left != NULL)
		{
			printf("the value of left child is %d\n",pNode->left->value);
		}
		else
		{
			printf("the left child is NULL\n");
		}
		if (pNode->right != NULL)
		{
			printf("the value of right child is %d\n",pNode->right->value);
		}
		else
		{
			printf("the right child is NULL\n");
		}
	}
	printf("\n");
}
void PrintTree(struct BinaryTreeNode *pRoot)
{
	PrintTreeNode(pRoot);
	if (pRoot != NULL)
	{
		if (pRoot->left != NULL)
			PrintTree(pRoot->left);
		if (pRoot->right != NULL)
			PrintTree(pRoot->right);
	}
}
void DestroyTree(struct BinaryTreeNode *pRoot)
{
	if (pRoot != NULL)
	{
		struct BinaryTreeNode *pLeft = pRoot->left;
		struct BinaryTreeNode *pRight = pRoot->right;
 
		free(pRoot);
		pRoot == NULL;
		DestroyTree(pLeft);
		DestroyTree(pRight);
	}
}



int TreeDepth(struct BinaryTreeNode *pRoot)
{
	if ( pRoot == NULL )
		return 0;
	int numLeft = TreeDepth(pRoot->left);
	int numRight = TreeDepth(pRoot->right);
 
	return (numLeft > numRight)?(numLeft + 1):(numRight + 1);
}


int main(){
    Test1();
    system("pause");
    return 0;
}