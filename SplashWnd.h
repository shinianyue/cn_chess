#if !defined(AFX_SPLASHWND_H__2BCDBD83_79DF_4BC9_8E6F_F6EE4AACB09C__INCLUDED_)
#define AFX_SPLASHWND_H__2BCDBD83_79DF_4BC9_8E6F_F6EE4AACB09C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SplashWnd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSplashWnd window

class CSplashWnd : public CWnd
{
// Construction
public:
	CSplashWnd();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplashWnd)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSplashWnd();

	// Generated message map functions
protected:
	//{{AFX_MSG(CSplashWnd)
	afx_msg void OnClose();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLASHWND_H__2BCDBD83_79DF_4BC9_8E6F_F6EE4AACB09C__INCLUDED_)
