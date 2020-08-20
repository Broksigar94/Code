#pragma once

#include <map>
#include <string>
#include "item.h"

class C_ITEM;

class C_ITEMMGER
{
private:
	std::map <std::string, C_ITEM*> m_map{};
	C_ITEM* m_citem;
	

private:
	C_ITEM* createItem(const char* sItemName, int nPrice);

public:
	C_ITEMMGER();
	void dataLoad(); //아이템생성
	C_ITEM* find(const char* sItemName);
	void erase(const char* sItemName);
};

