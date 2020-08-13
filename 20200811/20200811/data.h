#pragma once


class C_DATA
{
private:
	static C_DATA* m_pData;

	int m_nData;
private:
	C_DATA();

public:
	static C_DATA* getInstance();
	void releaseInstance();
	void setData(int nData);
	int getData();
};

