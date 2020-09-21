// WindowsProject1.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "myWin.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	C_MYWIN::createWin();
	C_MYWIN::getWin()->init(hInstance);
	C_MYWIN::getWin()->updateMsg();
	C_MYWIN::releaseWind();

	return 0;
}


