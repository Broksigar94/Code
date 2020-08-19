// 20200819.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vData{};

    //vData.reserve(10);
    //vData.resize(15);

    for (int i = 0; i < 10; i++)
    {
        vData.push_back(i);
        printf("사용 %d, 실제 메모리 : %d\n", vData.size(), vData.capacity());
    }

    std::vector<int>::iterator iter = vData.begin();

    while (iter != vData.end())
    {
        printf("%d\n", *iter);
        iter++;
    }
}


// 벡터는 어레이 리스트 기반, 배열을 쓸수있다면 그냥 배열