#include "bst.h"
#include <iostream>

C_BST::S_NODE** C_BST::findNode(int nId, S_NODE** ppNode)
{
    if (!*ppNode || (*ppNode)->nId == nId)
    {
        return ppNode;
    }

    if ((*ppNode)->nId > nId)
        return findNode(nId, &(*ppNode)->pLeft);

    return findNode(nId, &(*ppNode)->pRight);
}

void C_BST::printNode(S_NODE* pNode)
{
    if (!pNode)
        return;

    
    //중위순회시 정렬효과
    printNode(pNode->pLeft);
    printf("id :%d , data %d\n", pNode->nId, pNode->nData);
    printNode(pNode->pRight);
}

C_BST::S_NODE* C_BST::createNode(int nId, int nData)
{
    S_NODE* pNewNode = new S_NODE{};

    pNewNode->nId = nId;
    pNewNode->nData = nData;


    return pNewNode;
}

C_BST::S_NODE** C_BST::findMaxNode(S_NODE** ppNode)
{
    if (!(*ppNode)->pRight)
        return ppNode;
}

C_BST::C_BST()
    :m_pRoot{}
{
}

bool C_BST::findData(int nId, int* pData)
{
    S_NODE** ppFindNode = findNode(nId, &m_pRoot);

    if (!*ppFindNode)
        return false;

    *pData = (*ppFindNode)->nData;

    return true;

}

bool C_BST::addData(int nId, int nData)
{
    S_NODE** ppFind = findNode(nId, &m_pRoot);

    if (*ppFind)
        return false;

    *ppFind = createNode(nId, nData);

    return true;
}

void C_BST::printData()
{
    printf("------------------------\n");
    printNode(m_pRoot);
}

void C_BST::erase(int nId)
{
    S_NODE** ppFind = findNode(nId, &m_pRoot);

    if ((!*ppFind))
        return;

    if ((*ppFind)->pLeft && (*ppFind)->pRight)
    {
        S_NODE** ppMax = findMaxNode(&(*ppFind)->pLeft);
        (*ppFind)->nData = (*ppFind)->nData;
        (*ppFind)->nId = (*ppFind)->nId;
        ppFind = ppMax;

    }

    S_NODE* pDel = (*ppFind);
    //*ppFind = (*ppFind)->pLeft->pLeft;
    
    *ppFind = pDel->pLeft;
    
    if (pDel->pRight)
        *ppFind = pDel->pRight;

    delete pDel;
}
