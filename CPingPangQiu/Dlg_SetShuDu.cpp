// Dlg_SetShuDu.cpp : implementation file
//

#include "stdafx.h"
#include "CPingPangQiu.h"
#include "Dlg_SetShuDu.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlg_SetShuDu dialog


CDlg_SetShuDu::CDlg_SetShuDu(CWnd* pParent /*=NULL*/)
	: CDialog(CDlg_SetShuDu::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlg_SetShuDu)
	m_vx = 0.0f;
	m_vy = 0.0f;
	//}}AFX_DATA_INIT
}


void CDlg_SetShuDu::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlg_SetShuDu)
	DDX_Text(pDX, IDC_EDT_vx, m_vx);
	DDX_Text(pDX, IDC_EDT_vy, m_vy);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlg_SetShuDu, CDialog)
	//{{AFX_MSG_MAP(CDlg_SetShuDu)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlg_SetShuDu message handlers
