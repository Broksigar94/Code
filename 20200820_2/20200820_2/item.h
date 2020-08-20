#pragma once
#include <string>
class C_ITEM
{
private:
	std::string m_sItemName;
	int m_nItemPrice;
	C_ITEM(C_ITEM&) = delete;
	C_ITEM& operator = (const C_ITEM&) = delete;

public:
	C_ITEM();
	void init(int nItemPrice, const char* sItemName);
	void printData();
	const char* getItemName();
};

// 복사, 대입 delete