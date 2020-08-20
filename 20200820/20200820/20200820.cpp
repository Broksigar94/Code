// 20200820.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>

int main()
{
	/*
	std::map<float, int > mapData{};

	mapData.insert(std::pair<float, int>(1.1f, 5));
	mapData.insert(std::make_pair<float, int > (2.2f, 10));
	mapData.insert(std::map<float, int>::value_type(3.3f, 9));

	mapData[4.4f] = 99;
	//중복체크 없이 덮어써버림

	std::map<float, int>::iterator iterFind{};

	iterFind = mapData.find(2.2f);
	if (iterFind != mapData.end())
		printf("id:%f, data:%d\n", iterFind->first, iterFind->second);
	else
		printf("nothing\n");

	printf("data:%d\n", mapData[9.9f]);
	// 데이터가 없어도 접근하면 터지지않고 생성해버림 
	*/

	std::string str1{};
	std::string str2{};
	std::string str3{};

	str1 = "asdf";
	str2 = "zzz";
	str3 = str1 + str2;

	printf("%s\n", str3.c_str());
}

