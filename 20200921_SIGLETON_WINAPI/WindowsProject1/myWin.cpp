#include "myWin.h"
#include"resource.h"

C_MYWIN* C_MYWIN::m_pMyWin = nullptr;

C_MYWIN::C_MYWIN() :
    m_hInstance{},
    m_hWnd{}
{
}

BOOL C_MYWIN::init(HINSTANCE hInstance)
{
	m_hInstance = hInstance;

	WNDCLASSEXW wcex;
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = m_hInstance;
	wcex.hIcon = LoadIcon(m_hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT1));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = 0;
	wcex.lpszClassName = L"name";
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));
	RegisterClassExW(&wcex);

	m_hWnd = CreateWindowW(L"name", nullptr, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, m_hInstance, nullptr);

	if (!m_hWnd)
		return FALSE;

	ShowWindow(m_hWnd, SW_SHOWDEFAULT);
	UpdateWindow(m_hWnd);

	return TRUE;
}

void C_MYWIN::updateMsg()
{

	MSG msg;
	while (GetMessage(&msg, nullptr, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

LRESULT CALLBACK C_MYWIN::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	return m_pMyWin->myProc(hWnd, message, wParam, lParam);
}

LRESULT C_MYWIN::myProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hWnd, &ps);
		// TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다...
		EndPaint(hWnd, &ps);
	}
	break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

void C_MYWIN::createWin()
{
	if (!m_pMyWin)
		m_pMyWin = new C_MYWIN{};
}

C_MYWIN* C_MYWIN::getWin()
{
	return m_pMyWin;
}

void C_MYWIN::releaseWind()
{
	if (m_pMyWin)
	{
		delete m_pMyWin;
		m_pMyWin = nullptr;
	}
}
