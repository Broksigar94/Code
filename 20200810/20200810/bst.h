#pragma once
class C_BST
{

private:
	struct S_NODE
	{
		int nId;
		int nData;
		S_NODE* pLeft;
		S_NODE* pRight;
	};

private:
	S_NODE* m_pRoot;
	S_NODE** findNode(int nId, S_NODE** ppNode);
	void printNode(S_NODE* pNode);
	S_NODE* createNode(int nId, int nData);
	S_NODE** findMaxNode(S_NODE** ppNode);

public:
	C_BST();
	bool findData(int nId, int* pData);
	bool addData(int nId, int nData);
	void printData();
	void erase(int nId);

};

