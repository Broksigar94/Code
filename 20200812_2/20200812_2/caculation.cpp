#include "caculation.h"

void C_CAL::add()
{
    m_nResult= m_nData1 + m_nData2;
}

void C_CAL::mul()
{
    m_nResult = m_nData1 * m_nData2;
}

void C_CAL::div()
{
    m_nResult = m_nData1 / m_nData2;
}

C_CAL::C_CAL()
    : m_nData1{}, m_nData2{}, m_nResult{}
{
    m_arFunc[(int)E_TYPE::E_ADD] = &C_CAL::add;
    m_arFunc[(int)E_TYPE::E_DIV] = &C_CAL::div;
    m_arFunc[(int)E_TYPE::E_MUL] = &C_CAL::mul;
}

void C_CAL::updata(E_TYPE eType)
{
    (this->*m_arFunc[(int)eType])();

}

int C_CAL::getResult()
{
    return m_nResult;
}

void C_CAL::setData(int nData1, int nData2)
{
    m_nData1 = nData1;
    m_nData2 = nData2;
}
