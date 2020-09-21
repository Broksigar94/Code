#pragma once

#include<Windows.h>

class C_MYWIN
{
private:
	static C_MYWIN* m_pMyWin;
	HINSTANCE	m_hInstance;
	HWND		m_hWnd;

private:
	C_MYWIN();
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	LRESULT CALLBACK myProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

public:

	static void createWin();
	static C_MYWIN* getWin();
	static void releaseWind();

	BOOL init(HINSTANCE hInstance);
	void updateMsg();

};