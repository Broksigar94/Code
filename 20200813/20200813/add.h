#pragma once
	template<typename T>
	T add(T tData1, T tData2);

	template<>
	char add(char cData1, char cData2);



	template<typename T>
	T add(T tData1, T tData2)
	{
		return tData1 + tData2;
	}



