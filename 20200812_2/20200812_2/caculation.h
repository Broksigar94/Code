#pragma once
class C_CAL
{
public:
	enum class E_TYPE
	{
		E_ADD,
		E_MUL,
		E_DIV,
		E_TYPEMAX
	};

private:
	int m_nData1;
	int m_nData2;
	int m_nResult;
	void (C_CAL::*m_arFunc[(const int)E_TYPE::E_TYPEMAX])();

private:
	void add();
	void mul();
	void div();

public:
	C_CAL();
	void updata(E_TYPE eType);
	int getResult();
	void setData(int nData1, int nData2);
};


// 타입에 들어오는 거에 따라 연산 수행
