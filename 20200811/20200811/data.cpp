#include "data.h"


C_DATA C_DATA::*m_pData = nullptr;


C_DATA::C_DATA()
    :m_nData{}
{
}

C_DATA* C_DATA::getInstance()
{
    return m_pData;
}

void C_DATA::releaseInstance()
{
    delete m_pData;
}

void C_DATA::setData(int nData)
{
    m_nData = nData;
}

int C_DATA::getData()
{
    return m_nData;
}
