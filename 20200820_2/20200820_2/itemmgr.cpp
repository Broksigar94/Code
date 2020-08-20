#include "itemmgr.h"

C_ITEM* C_ITEMMGER::createItem(const char* sItemName, int nPrice)
{
	C_ITEM* pNewItem = new C_ITEM{};
	
}

C_ITEMMGER::C_ITEMMGER()
	:m_citem{}, m_map{}
{
}

void C_ITEMMGER::dataLoad()
{

	C_ITEM* pNewItem = createItem("포션", 100);
	m_map.insert(std::map<std::string, C_ITEM*>::value_type(pNewItem->getItemName(), pNewItem));

	C_ITEM* pNewItem = createItem("마나포션", 200);
	m_map.insert(std::map<std::string, C_ITEM*>::value_type(pNewItem->getItemName(), pNewItem));

	C_ITEM* pNewItem = createItem("힘증가", 10);
	m_map.insert(std::map<std::string, C_ITEM*>::value_type(pNewItem->getItemName(), pNewItem));

	C_ITEM* pNewItem = createItem("해독", 20);
	m_map.insert(std::map<std::string, C_ITEM*>::value_type(pNewItem->getItemName(), pNewItem));

	//std::map < std:: string, c_item* > ::iterator iter;

	//iter = m_map.find("포션");

	//중복체크
	
}

C_ITEM* C_ITEMMGER::find(const char* itemName)
{
	C_ITEM *finded{};
	std::map<std::string, C_ITEM*> ::iterator* iter{};


	*iter = m_map.begin();

	while (*iter != m_map.end())
	{
		if ((*iter)->first.compare(itemName))
		{
			finded = (*iter)->second;
			return finded;
		}
			
	}

	return nullptr;
}

void C_ITEMMGER::erase(const char* sItemName)
{
	std::map<std::string, C_ITEM*>::iterator iterFind = m_map.find(sItemName);

	if (iterFind == m_map.end())
		return;

	delete iterFind->second;
	m_map.erase(iterFind);

	// clear시에도 second를 지우고 해야됨
	// 메모리 누수방지 
}
