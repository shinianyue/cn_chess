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
	LPCTSTR lpszWndClass= AfxRegisterWndClass(NULL); // 注册窗口类
	CreateEx(WS_EX_TOOLWINDOW | WS_EX_TOPMOST,
		lpszWndClass, 
		NULL,
		WS_POPUP,
		CW_USEDEFAULT, 
		CW_USEDEFAULT, 
		SPLASH_WIDTH,
		SPLASH_HEIGHT, 
		NULL,NULL, NULL); // 创建窗口
      CClientDC dc(this);
	  CFont  font;
	  font.CreatePointFont(200,"华文行楷",NULL);
	  COLORREF  clr=dc.SetTextColor(RGB(250,10,100));
	  CFont*poldfont=dc.SelectObject(&font);
      dc.SetBkMode(TRANSPARENT);//设置背景透明
      CString str1("中国象棋");
	  CString str2("制作者: 软件09(1)  罗壮");
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
	AnimateWindow(GetSafeHwnd(), 800, AW_BLEND | AW_HIDE); // 窗口渐隐，实现淡出效果，时间0.8 秒
	CWnd::OnClose();
}

int CSplashWnd::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	CenterWindow(); // 启动画面窗口居中
	SetTimer(2, 2000, NULL); // 启动画面显示时间为2 秒
	AnimateWindow(GetSafeHwnd(), 800, AW_BLEND); // 窗口渐显，实现淡入效果，时间1.2 秒
	
	return 0;
}

BOOL CSplashWnd::OnEraseBkgnd(CDC *pDC) 
{
	// TODO: Add your message handler code here and/or call default
	HINSTANCE hApp = ::GetModuleHandle(NULL); // 得到应用程序的模块句柄
	HBITMAP hbmp = ::LoadBitmap(hApp, MAKEINTRESOURCE(IDB_BITMAP1)); //加载程序中的位图资源
	HDC hmdc = ::CreateCompatibleDC(pDC->GetSafeHdc()); // 创建兼容DC作为内存DC
	HBITMAP hbmpOld = (HBITMAP)::SelectObject(hmdc, hbmp); //将位图选入内存DC
	::BitBlt(pDC->GetSafeHdc(), 0, 0, SPLASH_WIDTH, SPLASH_HEIGHT, hmdc,0, 0, SRCCOPY); // 将内存DC 中的内容拷贝到设备DC 以显示
	// 清理，防止内存泄漏
	::SelectObject(hmdc, hbmpOld);
	::DeleteObject(hbmp);
	::DeleteDC(hmdc);
	
	return CWnd::OnEraseBkgnd(pDC);
}

void CSplashWnd::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	KillTimer(2); // 销毁定时器
	PostMessage(WM_CLOSE); // 关闭启动画面
	
	CWnd::OnTimer(nIDEvent);
}
