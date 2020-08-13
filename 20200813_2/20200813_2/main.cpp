#include <iostream>

template <typename T>
class C_Data
{

private:
	T m_tData;
public:
	C_Data();
	void  setData(T tData);
	T getData();
};

int main()
{
	C_Data <int> cData{};

	cData.setData(100);
	printf("%d\n", cData.getData());

}

template<typename T>
C_Data<T>::C_Data()
	: m_tData{}
{
}

template<typename T>
void C_Data<T>::setData(T tData)
{
	m_tData = tData;
}

template<typename T>
T C_Data<T>::getData()
{
	return m_tData;
}