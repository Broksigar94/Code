#include <iostream>
#include "add.h"



int main()
{
	printf("%d\n", add(1, 2));
	printf("%c\n", add<char>('z', 'z'));

	return 0;
}

// 템플릿은 같은 파일에 있어야 링크 가능
// 특수화 템플릿은 cpp에 넣어야 가능
// 특수화가 아니면 헤더에, 특수화면 소스에 
// 쓰기 더러움