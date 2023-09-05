// JiangJunDlg.cpp : implementation file
//

#include "stdafx.h"
#include "xiangqi1.h"
#include "JiangJunDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CJiangJunDlg dialog


CJiangJunDlg::CJiangJunDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CJiangJunDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CJiangJunDlg)
	//}}AFX_DATA_INIT
}


void CJiangJunDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CJiangJunDlg)
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CJiangJunDlg, CDialog)
	//{{AFX_MSG_MAP(CJiangJunDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJiangJunDlg message handlers
