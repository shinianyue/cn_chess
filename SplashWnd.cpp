// SplashWnd.cpp : implementation file
//

#include "stdafx.h"
#include "xiangqi1.h"
#include "SplashWnd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#define SPLASH_WIDTH  500
#define SPLASH_HEIGHT 410

/////////////////////////////////////////////////////////////////////////////
// CSplashWnd

CSplashWnd::CSplashWnd()
{
	LPCTSTR lpszWndClass= AfxRegisterWndClass(NULL); // ע�ᴰ����
	CreateEx(WS_EX_TOOLWINDOW | WS_EX_TOPMOST,
		lpszWndClass, 
		NULL,
		WS_POPUP,
		CW_USEDEFAULT, 
		CW_USEDEFAULT, 
		SPLASH_WIDTH,
		SPLASH_HEIGHT, 
		NULL,NULL, NULL); // ��������
      CClientDC dc(this);
	  CFont  font;
	  font.CreatePointFont(200,"�����п�",NULL);
	  COLORREF  clr=dc.SetTextColor(RGB(250,10,100));
	  CFont*poldfont=dc.SelectObject(&font);
      dc.SetBkMode(TRANSPARENT);//���ñ���͸��
      CString str1("�й�����");
	  CString str2("������: ���09(1)  ��׳");
	  TEXTMETRIC  tm;
	  dc.GetTextMetrics(&tm);
	  dc.TextOut(180,30,str1);
	  dc.TextOut(100,30+tm.tmHeight,str2);
	  dc.SetTextColor(clr);
	  dc.SelectObject(poldfont);

}

CSplashWnd::~CSplashWnd()
{
}


BEGIN_MESSAGE_MAP(CSplashWnd, CWnd)
	//{{AFX_MSG_MAP(CSplashWnd)
	ON_WM_CLOSE()
	ON_WM_CREATE()
	ON_WM_ERASEBKGND()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CSplashWnd message handlers

void CSplashWnd::OnClose() 
{
	// TODO: Add your message handler code here and/or call default
	AnimateWindow(GetSafeHwnd(), 800, AW_BLEND | AW_HIDE); // ���ڽ�����ʵ�ֵ���Ч����ʱ��0.8 ��
	CWnd::OnClose();
}

int CSplashWnd::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	CenterWindow(); // �������洰�ھ���
	SetTimer(2, 2000, NULL); // ����������ʾʱ��Ϊ2 ��
	AnimateWindow(GetSafeHwnd(), 800, AW_BLEND); // ���ڽ��ԣ�ʵ�ֵ���Ч����ʱ��1.2 ��
	
	return 0;
}

BOOL CSplashWnd::OnEraseBkgnd(CDC *pDC) 
{
	// TODO: Add your message handler code here and/or call default
	HINSTANCE hApp = ::GetModuleHandle(NULL); // �õ�Ӧ�ó����ģ����
	HBITMAP hbmp = ::LoadBitmap(hApp, MAKEINTRESOURCE(IDB_BITMAP1)); //���س����е�λͼ��Դ
	HDC hmdc = ::CreateCompatibleDC(pDC->GetSafeHdc()); // ��������DC��Ϊ�ڴ�DC
	HBITMAP hbmpOld = (HBITMAP)::SelectObject(hmdc, hbmp); //��λͼѡ���ڴ�DC
	::BitBlt(pDC->GetSafeHdc(), 0, 0, SPLASH_WIDTH, SPLASH_HEIGHT, hmdc,0, 0, SRCCOPY); // ���ڴ�DC �е����ݿ������豸DC ����ʾ
	// ������ֹ�ڴ�й©
	::SelectObject(hmdc, hbmpOld);
	::DeleteObject(hbmp);
	::DeleteDC(hmdc);
	
	return CWnd::OnEraseBkgnd(pDC);
}

void CSplashWnd::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	KillTimer(2); // ���ٶ�ʱ��
	PostMessage(WM_CLOSE); // �ر���������
	
	CWnd::OnTimer(nIDEvent);
}
