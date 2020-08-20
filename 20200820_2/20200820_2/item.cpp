#include "item.h"

C_ITEM::C_ITEM()
	: m_nItemPrice{}, m_sItemName{}
{
}

void C_ITEM::init(int nItemPrice, const char* sItemName)
{
	m_nItemPrice = nItemPrice;
	m_sItemName = sItemName;
}

void C_ITEM::printData()
{
	printf("Item Name : %s, Price : %d\n", m_sItemName, m_nItemPrice);

}

const char* C_ITEM::getItemName()
{
	return m_sItemName.c_str();

	
}
